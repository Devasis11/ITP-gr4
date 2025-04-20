/*
4. Write a C++ program to input a decimal number and convert it into binary and
octal number system using loops.
*/

#include <iostream>
using namespace std;
int main ()
{
    int n,temp;
    cout << "Enter a decimal number : ";
    cin >> n;
    temp = n;
    int bin[64], i = 0;
    while(temp > 0) {
       bin[i] = temp % 2;
       temp /= 2;
       i++;
    }
    cout << "Binary : ";
    for (int j = i - 1; j >= 0; j--) {
        cout << bin[j] ;
    }
    cout << endl;
    temp = n;
    int oct[64], k = 0;
    
    while (temp > 0) {
        oct[k] = temp % 8;
        temp /= 8;
        k++;
    }
    cout << "Octal : ";
    for (int j = k - 1; j >= 0; j--) {
        cout << oct[j];
    }
    return 0;
} 