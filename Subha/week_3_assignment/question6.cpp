#include <iostream>
#include <string>

using namespace std;

void toLowerCase(string &str) {
    for (char &ch : str) {
        if (ch >= 'A' && ch <= 'Z') ch += 32;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    toLowerCase(str);
    cout << "Lowercase string: " << str << endl;
    return 0;
}