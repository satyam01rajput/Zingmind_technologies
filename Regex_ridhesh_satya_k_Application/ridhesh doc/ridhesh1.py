import re
import logging
import random
import requests
import csv
import os
from typing import List, Dict, Tuple, Union
import argparse
from tabulate import tabulate

# Setup logger
logging.basicConfig(level=logging.DEBUG, filename='data_processing_advanced.log',
                    filemode='w', format='%(asctime)s - %(levelname)s - %(message)s')

# Constants
DEFAULT_NUM_ENTRIES = 400
CSV_VALID_FILE = "exported_data_valid.csv"
CSV_INVALID_FILE = "exported_data_invalid.csv"

def get_regex_patterns() -> Dict[str, str]:
    """Return regex patterns for validation."""
    patterns = {
        "us_state": r"^(Alabama|Alaska|Arizona|Arkansas|California|Colorado|Connecticut|Delaware|Florida|Georgia|Hawaii|Idaho|Illinois|Indiana|Iowa|Kansas|Kentucky|Louisiana|Maine|Maryland|Massachusetts|Michigan|Minnesota|Mississippi|Missouri|Montana|Nebraska|Nevada|New Hampshire|New Jersey|New Mexico|New York|North Carolina|North Dakota|Ohio|Oklahoma|Oregon|Pennsylvania|Rhode Island|South Carolina|South Dakota|Tennessee|Texas|Utah|Vermont|Virginia|Washington|West Virginia|Wisconsin|Wyoming)$",
        "valid_zipcode": r"^\d{5}$",
        "valid_salary": r"^\d{1,3}(,\d{3})*(\.\d{2})?$",
        "email": r"^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$",
        "phone": r"^\+?1?\d{10,15}$",
        "date": r"^\d{4}-\d{2}-\d{2}$",
        "gender": r"^(male|female|other)$",
        "age": r"^\d{1,3}$"
    }
    return patterns

def fetch_random_data(num_entries: int) -> List[Dict[str, Union[str, int]]]:
    """Fetch mock data from the random user generator API."""
    logging.info("Fetching random user data from the API.")
    try:
        response = requests.get(f"https://randomuser.me/api/?results={num_entries}")
        response.raise_for_status()
        data = response.json()
        logging.debug(f"Fetched Data: {data}")

        if 'results' in data and isinstance(data['results'], list) and data['results']:
            return [extract_user_data(user) for user in data['results']]
        else:
            logging.warning("No data available in the API response.")
            return []
    except requests.exceptions.RequestException as e:
        logging.error(f"Failed to fetch data from API: {e}")
        return []

def extract_user_data(user: Dict[str, Union[str, int]]) -> Dict[str, Union[str, int]]:
    """Extract required user data from API response."""
    return {
        "name": f"{user['name']['first']} {user['name']['last']}",
        "email": user['email'],
        "phone": user['phone'],
        "gender": user['gender'],
        "age": user["dob"]["age"],
        "date": user["dob"]["date"][:10],
        "address": f"{user['location']['street']['number']} {user['location']['street']['name']}",
        "city": user['location']['city'],
        "state": user['location']['state'],
        "zipcode": str(user['location']['postcode']),
        "country": user['location']['country'],
        "salary": f"{random.randint(30000, 120000):,}.00"
    }

def read_local_data(file_path: str) -> List[Dict[str, Union[str, int]]]:
    """Read user data from a local CSV file."""
    logging.info(f"Reading user data from local file: {file_path}")
    if not os.path.isfile(file_path):
        logging.error("File not found.")
        return []

    data = []
    with open(file_path, mode='r', newline='', encoding='utf-8') as file:
        reader = csv.DictReader(file)
        for row in reader:
            data.append(row)
    logging.debug(f"Read {len(data)} entries from local file.")
    return data

def format_email(email: str) -> str:
    """Remove the domain from the email, i.e., @gmail.com."""
    return email.split('@')[0] if email.endswith('@gmail.com') else email

def remove_dots_from_email(email: str) -> str:
    """Remove periods from the email string."""
    return re.sub(r'\.', '', email)

def format_phone(phone: str) -> str:
    """Format the phone number to a specific style (XXX-XXX-XXXX)."""
    return re.sub(r'(\d{3})(\d{3})(\d{4})', r'\1-\2-\3', phone)

def validate_data(data: Dict[str, Union[str, int]], unique_phone: bool = False) -> Tuple[Dict[str, str], bool]:
    """Validate user data and return valid fields with detailed feedback."""
    valid = True
    validation_results = {}
    patterns = get_regex_patterns()

    for key, value in data.items():
        # Convert value to string for regex matching
        value_str = str(value)

        if key in patterns:
            if not re.match(patterns[key], value_str):
                valid = False
                validation_results[key] = f"{value_str} (Invalid)"
            else:
                validation_results[key] = f"{value_str} (Valid)"
        else:
            validation_results[key] = value_str  # No validation for these fields

    # Special logic for unique phone numbers
    if unique_phone:
        phone_valid = validation_results.get('phone', '').endswith("(Valid)")
        if not phone_valid:
            valid = False
            validation_results['phone'] = f"{data['phone']} (Invalid)"
        elif len(validation_results) % 2 == 0:  # Alternate validity
            valid = False
            validation_results['phone'] = f"{data['phone']} (Invalid)"

    logging.debug(f"Validation results for entry: {validation_results}")
    return validation_results, valid

def check_for_duplicates(data: List[Dict[str, Union[str, int]]]) -> List[Dict[str, Union[str, int]]]:
    """Check for duplicate entries based on email."""
    seen = set()
    duplicates = []
    for entry in data:
        if entry['email'] in seen:
            duplicates.append(entry)
        else:
            seen.add(entry['email'])
    logging.debug(f"Found {len(duplicates)} duplicate entries.")
    return duplicates

def summarize_data(valid_data: List[Dict[str, Union[str, int]]], invalid_data: List[Dict[str, Union[str, int]]]) -> None:
    """Summarize and log the data statistics."""
    logging.info("Summarizing data...")
    logging.info(f"Total valid entries: {len(valid_data)}")
    logging.info(f"Total invalid entries: {len(invalid_data)}")

    valid_salaries = [float(entry['salary'].replace(',', '').replace('.00', '')) for entry in valid_data if 'salary' in entry]

    if valid_salaries:
        average_salary = sum(valid_salaries) / len(valid_salaries)
        min_salary = min(valid_salaries)
        max_salary = max(valid_salaries)
        logging.info(f"Average Salary: ${average_salary:,.2f}")
        logging.info(f"Minimum Salary: ${min_salary:,.2f}")
        logging.info(f"Maximum Salary: ${max_salary:,.2f}")
    else:
        logging.info("No valid salaries to calculate statistics.")

def export_to_csv(valid_data: List[Dict[str, str]], invalid_data: List[Dict[str, str]]) -> None:
    """Export valid and invalid data to CSV files with UTF-8 encoding."""
    try:
        if valid_data:
            logging.info(f"Exporting {len(valid_data)} valid entries to {CSV_VALID_FILE}")
            with open(CSV_VALID_FILE, mode='w', newline='', encoding='utf-8') as valid_file:
                valid_writer = csv.DictWriter(valid_file, fieldnames=valid_data[0].keys())
                valid_writer.writeheader()
                valid_writer.writerows(valid_data)

        if invalid_data:
            logging.info(f"Exporting {len(invalid_data)} invalid entries to {CSV_INVALID_FILE}")
            with open(CSV_INVALID_FILE, mode='w', newline='', encoding='utf-8') as invalid_file:
                invalid_writer = csv.DictWriter(invalid_file, fieldnames=invalid_data[0].keys())
                invalid_writer.writeheader()
                invalid_writer.writerows(invalid_data)

    except Exception as e:
        logging.error(f"Error exporting to CSV: {e}")

def validate_and_categorize_data(data: List[Dict[str, Union[str, int]]]) -> Tuple[List[Dict[str, Union[str, int]]], List[Dict[str, Union[str, int]]]]:
    """Validate and categorize data into valid and invalid entries."""
    valid_data = []
    invalid_data = []
    
    for i, entry in enumerate(data):
        # Toggle unique phone validation based on index
        unique_phone = (i % 2 == 0)
        validated_entry, is_valid = validate_data(entry, unique_phone)

        if is_valid:
            # Update email to remove the domain and apply dot removal
            validated_entry['email'] = format_email(validated_entry['email'])
            validated_entry['phone'] = format_phone(validated_entry['phone'])
            validated_entry['age'] = f"Age: {validated_entry['age']}"
            valid_data.append(validated_entry)
        else:
            invalid_data.append(validated_entry)

    logging.info(f"Validation completed. Validated {len(valid_data)} entries as valid and {len(invalid_data)} as invalid.")
    return valid_data, invalid_data

def main(num_entries: int, local_file: str = None) -> None:
    """Main processing function."""
    if local_file:
        # If a local file is provided, only load data from the local file
        logging.info(f"Loading data from local file: {local_file}")
        user_data = read_local_data(local_file)
        if not user_data:
            logging.error("No data found in the local file. Exiting.")
            return
    else:
        # If no local file is provided, fetch random data online
        logging.info(f"No local file provided, fetching {num_entries} entries from API.")
        user_data = fetch_random_data(num_entries)

    duplicates = check_for_duplicates(user_data)
    valid_data, invalid_data = validate_and_categorize_data(user_data)

    summarize_data(valid_data, invalid_data)
    export_to_csv(valid_data, invalid_data)

    print("\nSample of Valid Entries:")
    print(tabulate(valid_data[:10], headers="keys", tablefmt="pretty"))

    # Create a new list for the second table with modified emails
    modified_email_entries = [{"email": remove_dots_from_email(entry['email']), "phone": entry['phone'], "age": entry['age']} for entry in valid_data[:10]]

    print("\nModified Email and Other Entries:")
    print(tabulate(modified_email_entries, headers="keys", tablefmt="pretty"))

    print("\nSample of Invalid Entries:")
    print(tabulate(invalid_data[:10], headers="keys", tablefmt="pretty"))

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Process user data.")
    parser.add_argument('-n', '--num_entries', type=int, default=DEFAULT_NUM_ENTRIES, help='Number of random entries to fetch')
    parser.add_argument('-f', '--file', type=str, help='Path to local CSV file')
    args = parser.parse_args()
    
    main(args.num_entries, args.file)