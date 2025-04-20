// Write a C++ program to remove all characters except alphabets
//  in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, result = "";

    // Input the string from user
    cout << "Enter a string: ";
    getline(cin, input);

    // Loop through each character and keep only alphabets
    for (char ch : input) {
        if (isalpha(ch)) {
            result += ch;
        }
    }

    // Display the cleaned string
    cout << "String with only alphabets: " << result << endl;

    return 0;
}
