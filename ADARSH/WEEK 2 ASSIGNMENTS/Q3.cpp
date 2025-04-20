//3. Write a C++ program to copy the elements of one array into another array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size Of array:";cin>>n;
    int a[n],b[n];
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0;i<n;i++)
	cin>>a[i];
    for(int i=0;i<n;i++)
	b[i]=a[i];
    cout<<"Copied array:\n";
    for(int i=0;i<n;i++)
	cout<<b[i]<<" ";
    return 0;
}

