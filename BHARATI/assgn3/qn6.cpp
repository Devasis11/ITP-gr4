// Write a C++ program to convert a string to lowercase without
// using inbuilt functions
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Input string from user
    cout << "Enter a string: ";
    getline(cin, str);

    // Convert to lowercase manually
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert uppercase to lowercase
        }
    }

    // Output the result
    cout << "Lowercase string: " << str << endl;

    return 0;
}
