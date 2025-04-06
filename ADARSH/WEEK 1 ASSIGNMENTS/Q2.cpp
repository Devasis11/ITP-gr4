/*2. Write a C++ program to input 3 sides of triangle and a triangle can be drawn
from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
scalene triangle.*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
    cout<<"Enter three sides of a triangle: ";
    cin>>a>>b>>c;
    if (a+b>c && a+c>b && b+c>a) 
	{
        cout<<"TRIANGLE IS POSSIBLE"<<endl;
        if (a==b && b==c && a==c) 
		cout << "Equilateral Triangle"<<endl;
        else if (a==b || b==c || a==c) 
		cout << "Isosceles Triangle"<<endl;
        else 
		cout << "Scalene Triangle"<<endl;
    }
    else cout << "TRIANGLE IS NOT POSSIBLE WITH THE INPUTED SIDES";
	return 0;
}
