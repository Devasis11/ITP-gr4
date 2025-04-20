// 2. Write a C++ program to sort a given array using function.
#include <iostream>
using namespace std;
void sort(int b[], int s) 
{
    for(int i=0;i<s-1;i++) 
	{
        for(int j=i+1; j<s; j++) 
		{
            if(b[i]>b[j]) 
			{
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}
int main() 
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<< "Enter "<<n<< " elements:\n";
    for(int i=0;i<n;i++) 
	{
        cin>>a[i];
    }
    sort(a,n);
    cout<<"Sorted array:\n";
    for(int i=0;i<n;i++) 
	{
        cout<<a[i]<<" ";
    }
    return 0;
}

