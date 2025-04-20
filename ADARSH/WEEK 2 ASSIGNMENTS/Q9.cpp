// 9. Print all elements of an array using recursion
#include<iostream>
using namespace std;
int display(int a[],int i,int n)
{
    if(i==n) 
	return 0;
    cout<<a[i]<<" ";
    display(a,i+1,n);
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0;i<n;i++) 
	cin>>a[i];
    cout<<"Array elements: ";
    display(a,0,n);
    return 0;
}

