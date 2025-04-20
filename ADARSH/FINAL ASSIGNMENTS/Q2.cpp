// 2. Write a C++ program to find the total number of alphabets,digits and special characters in a string.
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int a=0,d=0,sp=0;
    for(int i=0;i<s.length();i++)
	{
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		a++;
        else if(s[i]>='0'&&s[i]<='9') 
		d++;
        else 
		sp++;
    }
    cout<<"No of Alphabets: "<<a<<"\nNo of Digits: "<<d<<"\nNo of Special characters: "<<sp;
    return 0;
}

