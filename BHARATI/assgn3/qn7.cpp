// Write a C++ program to remove all occurrences of a given
//  character from a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;

    // Input string and character to remove
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter character to remove: ";
    cin >> ch;

    // Create a new string without the given character
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) {
            result += str[i];
        }
    }

    // Output the result
    cout << "String after removing '" << ch << "': " << result << endl;

    return 0;
}
