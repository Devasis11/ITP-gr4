//3. Write a C++ program to find the largest digit in a number.
#include<iostream>
using namespace std;
int main()
{
	int n,max=0;
    cout<<"Enter a number: ";
    cin>>n;
    while (n>0) 
	{
        int d=n%10;
        if(d>max) 
		max=d;
        n=n/10;
    }
    cout<<"Largest digit in number: "<<max<<endl;
return 0;
}
