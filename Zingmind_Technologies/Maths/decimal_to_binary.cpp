#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int decimalNum;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    // Assuming 32-bit integer
    bitset<32> binaryNum(decimalNum);

    cout << "Binary equivalent: " << binaryNum << endl;

    return 0;
}