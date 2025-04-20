// Write a C++ program to check whether a given string is a
// palindrome. (without using any built-in reverse function
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool isPalindrome = true;

    // Input the string
    cout << "Enter a string: ";
    getline(cin, str);

    int start = 0;
    int end = str.length() - 1;

    // Check for palindrome by comparing characters from both ends
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    // Output result
    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
