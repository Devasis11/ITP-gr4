/*
2. Write a C++ program to input 3 sides of triangle and a triangle can be drawn
from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
scalene triangle.
*/

#include <iostream>
using namespace std;
int main () {
    int a,b,c;
    cout << "Enter 1st side : ";
    cin >> a;
    cout << "Enter 2nd side : ";
    cin >> b;
    cout << "Enter 3rd side : ";
    cin >> c;
    if (a + b <= c || b + c <= a || c + a <= b) {
        cout << "Triangle cannot be formed." << endl; 
    }
    else {
        cout << "Triangle can be formed." << endl;
        if(a==b && b==c) {
            cout << "Equilateral Triangle" << endl;
        }
        else if(a==b || b==c || c==a) {
            cout << "Isosceles Triangle" << endl;
        }
        else {
            cout << "Scalene Triangle" << endl;
        }
    }
    return 0;
}