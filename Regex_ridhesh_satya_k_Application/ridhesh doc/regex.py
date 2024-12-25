import re
import logging
import argparse
import csv
from tabulate import tabulate
from typing import List, Dict, Tuple, Set

# Setup logger
logging.basicConfig(level=logging.DEBUG, filename='data_processing.log',
                    filemode='w', format='%(asctime)s - %(levelname)s - %(message)s')

# Constants for CSV files
CSV_VALID_FILE = "exported_data_valid.csv"
CSV_INVALID_FILE = "exported_data_invalid.csv"

# Functions to fetch example data
def fetch_harsh_data() -> List[Dict[str, str]]:
    return [
        {'name': 'John Doe', 'email': 'john.doe@example.com', 'phone': '1234567890'},
        {'name': 'Jane Smith', 'email': 'jane.smith@web', 'phone': '987654321'},
        {'name': 'Invalid Jane', 'email': 'jane@doe', 'phone': '555-5555'},
        {'name': 'Bob Unreachable', 'email': 'bob@example.com', 'phone': '5551234567'}
    ]

def fetch_ridhesh_data() -> List[Dict[str, str]]:
    return [
        {'name': 'Alice Johnson', 'email': 'alice.johnson@example.com', 'phone': '2345678901'},
        {'name': 'Bob Brown', 'email': 'bob@com', 'phone': '123456789'},
        {'name': 'Eve Adams', 'email': 'eve.adams@example.com', 'phone': '1234567890'},
        {'name': 'Charlie', 'email': 'charlie@.com', 'phone': '111-222-3333'},
        {'name': 'Invalid Bob', 'email': 'bob@example', 'phone': '3333333333'},
    ]

# Validation Functions
def validate_phone(phone: str) -> bool:
    return bool(re.match(r'^\(?\d{3}\)?[-.\s]?\d{3}[-.\s]?\d{4}$', phone))

def validate_email(email: str) -> bool:
    return bool(re.match(r'^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$', email))

def extract_username(email: str) -> str:
    match = re.match(r'([a-zA-Z0-9._%+-]+)@', email)
    return match.group(1) if match else ""

def extract_area_code(phone: str) -> str:
    match = re.match(r'^\(?(\d{3})\)?', phone)
    return match.group(1) if match else ""

def validate_data(data: List[Dict[str, str]]) -> Tuple[List[Dict[str, str]], List[Dict[str, str]]]:
    valid_entries = []
    invalid_entries = []

    for entry in data:
        if validate_email(entry['email']) and validate_phone(entry['phone']):
            valid_entries.append(entry)
        else:
            invalid_entries.append(entry)

    return valid_entries, invalid_entries

def extract_unique_info(data: List[Dict[str, str]]) -> Set[str]:
    unique_usernames = set()
    unique_area_codes = set()

    for entry in data:
        if validate_email(entry['email']):
            username = extract_username(entry['email'])
            if username:
                unique_usernames.add(username)

        if validate_phone(entry['phone']):
            area_code = extract_area_code(entry['phone'])
            if area_code:
                unique_area_codes.add(area_code)

    return unique_usernames, unique_area_codes

def main() -> None:
    # Fetch data from both sources
    harsh_data = fetch_harsh_data()
    ridhesh_data = fetch_ridhesh_data()

    # Combine the data
    all_data = harsh_data + ridhesh_data
    
    logging.info(f"Fetched {len(all_data)} entries from both sources.")

    valid_data, invalid_data = validate_data(all_data)

    # Extract unique information from both datasets
    unique_usernames, unique_area_codes = extract_unique_info(all_data)

    # Display results
    print("\nValid Entries:")
    print(tabulate(valid_data, headers="keys", tablefmt="grid"))

    print("\nInvalid Entries:")
    print(tabulate(invalid_data, headers="keys", tablefmt="grid"))

    print("\nUnique Usernames:")
    print(unique_usernames)

    print("\nUnique Area Codes:")
    print(unique_area_codes)

    # Export to CSV
    if valid_data:
        with open(CSV_VALID_FILE, "w", newline='') as valid_file:
            writer = csv.DictWriter(valid_file, fieldnames=valid_data[0].keys())
            writer.writeheader()
            writer.writerows(valid_data)
        logging.info(f"Valid data has been written to {CSV_VALID_FILE}.")

    if invalid_data:
        with open(CSV_INVALID_FILE, "w", newline='') as invalid_file:
            writer = csv.DictWriter(invalid_file, fieldnames=invalid_data[0].keys())
            writer.writeheader()
            writer.writerows(invalid_data)
        logging.info(f"Invalid data has been written to {CSV_INVALID_FILE}.")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Process user data from harsh.py and ridhesh1.py.")
    args = parser.parse_args()

    main()