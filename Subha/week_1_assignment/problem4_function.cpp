/*
4. Write a C++ program to input a decimal number and convert it into binary and
octal number system using loops.
*/

#include <iostream>
using namespace std;
int DecToBin(int n) {
    int bin = 0, place = 1;
    while (n > 0){
        int r = n % 2;
        bin = bin + (r * place);
        n /= 2;
        place *= 10;
    }
    return bin;
}
int DecToOct(int n) {
    int oct = 0, place = 1;
    while (n > 0){
        int r = n % 8;
        oct = oct + (r * place);
        n /= 8;
        place *= 10;
    }
    return oct;
}
int main()
{
    int n;
    cout << "Enter a Decimal number : ";
    cin >> n;
    cout << "Binary : " << DecToBin(n) << endl;
    cout << "Octal : " << DecToOct(n) << endl;
    return 0;
} 

