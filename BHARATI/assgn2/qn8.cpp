// Find the sum of digits of a number using recursion.
#include<iostream>
using namespace std;

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    if(n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Handle negative numbers
    if(num < 0)
        num = -num;

    int sum = sumOfDigits(num);
    cout << "Sum of digits = " << sum << endl;

    return 0;
}
