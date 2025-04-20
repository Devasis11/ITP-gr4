// Write a C++ program to find the total number of alphabets,
//  digits and special characters in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int alphabets = 0, digits = 0, specialChars = 0;

    // Input the string from user
    cout << "Enter a string: ";
    getline(cin, str);

    // Loop through each character
    for (char ch : str) {
        if (isalpha(ch)) {
            alphabets++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (!isspace(ch)) { // Skip spaces from being counted as special characters
            specialChars++;
        }
    }

    // Display the result
    cout << "Total Alphabets: " << alphabets << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << specialChars << endl;

    return 0;
}
