// Find the sum of digits of a number using recursion
#include<iostream>
using namespace std;

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    if(n < 0) {
        cout << "Fibonacci is not defined for negative numbers.\n";
    } else {
        cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    }

    return 0;
}
