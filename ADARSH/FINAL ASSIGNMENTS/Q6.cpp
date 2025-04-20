//6. Write a C++ program to convert string to lowercase without using inbuilt functions.
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    if(s[i]>='A'&&s[i]<='Z')
	s[i]=s[i]+32;
    cout<<s;
    return 0;
}

