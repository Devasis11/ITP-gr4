/*
Write a C++ program to find the largest digit in a number.
*/

#include <iostream>
using namespace std;
int main ()
{
    int n,ld = 0;
    cout << "Enter a number : ";
    cin >> n;
    int num = n;
    while (n > 0)
    {
        int d = n % 10;
        if (d > ld) {
            ld = d;
        } 
        n /= 10;
    }
    cout << "Largest digit in " << num << " is " << ld;
    return 0;
} 
