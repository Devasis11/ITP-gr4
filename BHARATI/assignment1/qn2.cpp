// Write a C++ program to input 3 sides of triangle and a triangle can be drawn
//  from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
//  scalene triangle.
#include<iostream>
//#include<cmath>//for pow()
using namespace std;

int main(){
int a,b,c;
cout<<"sides:";
cin>>a>>b>>c;
if(a+b>c||a+c>b||b+c>a && a!=0 && b!=0 && c!=0)
{cout<<"triangle is possible";
    cout<<endl;
    //case 1:
    if (a==b && b==c)
    cout<<"equilateral triangle";
    //case 2:
    else if (a!=b && b!=c && a!=c)
    cout<<"scalene triangle";
    //case 3:
    else if(a==b||b==c||a==c )
    cout<<"isosceles triangle";
    
  } 
  else
  cout<<"triangle not possible";


}