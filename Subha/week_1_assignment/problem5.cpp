/*
5. Write a C++ program to check if a Number is Perfect square using loops.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main () 
{
    int n,i = 0;
    cout << "Enter a number : ";
    cin >> n;

    while (i  <= sqrt(n)) {
        if (i == sqrt(n)) {
            cout << n << " is a perfect square";
            return 0;
        }
        i++;
    }
    cout << n << " is not a perfect square";
    return 0;
}