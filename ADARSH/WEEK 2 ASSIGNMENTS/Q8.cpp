// 8. Find the sum of digits of a number using recursion.
#include<iostream>
using namespace std;
int sum_of_Digits(int n)
{
    if(n==0) 
	return 0;
    return n%10 + sum_of_Digits(n/10);
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Sum of digits: "<<sum_of_Digits(n);
    return 0;
}

