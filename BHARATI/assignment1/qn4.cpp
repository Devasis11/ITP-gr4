// Write a C++ program to input a decimal number and convert it into binary and
//  octal number system using loops
#include <iostream>
using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int num) {
    int binary[32];
    int index = 0;
    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }
    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;
}

// Function to convert decimal to octal
void decimalToOctal(int num) {
    int octal[32];
    int index = 0;
    while (num > 0) {
        octal[index++] = num % 8;
        num /= 8;
    }
    cout << "Octal: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << octal[i];
    }
    cout << endl;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    if (decimal == 0) {
        cout << "Binary: 0" << endl;
        cout << "Octal: 0" << endl;
    } else {
        decimalToBinary(decimal);
        decimalToOctal(decimal);
    }
    
    return 0;
}
