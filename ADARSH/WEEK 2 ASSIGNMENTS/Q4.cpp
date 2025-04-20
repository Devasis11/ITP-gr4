// 4. Write a C++ program to find maximum occurring integer in an array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n],f=0,b;
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0;i<n;i++) 
	cin>>a[i];
    for(int i=0;i<n;i++)
	{
        int c=1;
        for(int j=i+1;j<n;j++)
        if(a[i]==a[j]) 
		c++;
        if(c>f)
		{
            f=c;
            b=a[i];
        }
    }
    cout<<"Maximum occurring integer is: "<<b;
    return 0;
}


