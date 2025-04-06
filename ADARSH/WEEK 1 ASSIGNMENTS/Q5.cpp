/*5. Write a C++ program to check if a Number is Perfect square using loops. */
#include<iostream>
using namespace std;
int main()
{
	int c=0,n;
	cout<<"Enter a number: ";
	cin>>n;
	if(n<0)
	{
	cout<<"The no. is negative so perfect sq. cannot be found";
	exit(1);
    }	
	for(int i=0;i<=n/2;i++)
	{
		if(i*i==n)
		{
		cout<<"Inputed Number is perfect sq";
		c=c+1;
		break;
		}
	}
	if(c==0)
	cout<<"The Number is NOT A PERFECT SQ.";
    return 0;
}
