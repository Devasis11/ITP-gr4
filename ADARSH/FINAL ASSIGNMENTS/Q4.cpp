// 4. Write a C++ program to rotate an array to the right by k positions.
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n],temp[n];
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter k: ";
    cin>>k;
    k=k%n;
    for(int i=0;i<n;i++)
    temp[(i+k)%n]=a[i];
    for(int i=0;i<n;i++)
    a[i]=temp[i];
    cout<<"Array after rotation:\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}

