#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isalpha(ch)) result += ch;
    }

    cout << "Filtered string: " << result << endl;
    return 0;
}