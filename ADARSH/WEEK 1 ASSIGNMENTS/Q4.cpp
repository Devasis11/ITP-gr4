/*4. Write a C++ program to input a decimal number and convert it into binary and
octal number system using loops.*/
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the value of n: ";
cin>>n;
cout<<"Octal: "<<oct<<n<<endl;
int i=0,arr[64];
int temp=n;
while(n>0){
arr[i]=n%2;
i++;
n=n/2;
}
cout << "Binary: ";
    if (temp == 0) 
    {
        cout<<"0";
    } 
    else
    for (int j=i-1;j>=0;j--) 
    {
        cout<<arr[j];
    }
    return 0;
}
