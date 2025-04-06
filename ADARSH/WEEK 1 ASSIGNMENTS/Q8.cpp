/* 8. Write a C++ program to print the pattern
sample output: for n=4
1     1
12   21
123 321
12344321*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	int s=n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
		cout<<j;
		}
		for(int k=1;k<=(2*(s-1));k++)
		{
		cout<<" ";
		}
		for(int l=i;l>=1;l--)
		{
		cout<<l;
		}
	s=s-1;
	cout<<endl;
}
return 0;
}
