// 1. Take two array as input, merge them and print it in reverse order using loop
#include <iostream>
using namespace std;
int main() 
{
    int n1,n2;
    cout<<"Enter size of 1st and 2nd array: ";
    cin>>n1>>n2;
    int ar1[n1];
    cout << "Enter elements of first array:\n";
    for(int i=0;i<n1;i++) 
	{
        cin>>ar1[i];
    }
    int ar2[n2];
    cout << "Enter elements of second array:\n";
    for(int i=0; i<n2;i++) 
	{
        cin>>ar2[i];
    }
    int m[n1+n2];
    for(int i=0; i<n1; i++) 
	{
        m[i] = ar1[i];
    }
    for(int i=0;i<n2;i++) 
	{
        m[n1+i] = ar2[i];
    }
    cout << "Merged array in reverse order:\n";
    for(int i=n1+n2-1; i>=0;i--) 
	{
        cout<<m[i]<<" ";
    }
    return 0;
}

