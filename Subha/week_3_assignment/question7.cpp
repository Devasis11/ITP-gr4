#include <iostream>
#include <string>

using namespace std;

string removeChar(string str, char ch) {
    string result = "";
    for (char c : str) {
        if (c != ch) result += c;
    }
    return result;
}

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter character to remove: ";
    cin >> ch;

    cout << "Modified string: " << removeChar(str, ch) << endl;
    return 0;
}