#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int alphabets = 0, digits = 0, specialChars = 0;

    for (char ch : str) {
        if (isalpha(ch)) alphabets++;
        else if (isdigit(ch)) digits++;
        else specialChars++;
    }

    cout << "Alphabets: " << alphabets << "\nDigits: " << digits << "\nSpecial characters: " << specialChars << endl;
    return 0;
}
