// 7. Write a C++ program to remove all occurrences of a given character from a string.
#include<iostream>
using namespace std;
int main()
{
    string s;char c;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<"Enter the character to be removed: ";
    cin>>c;   
    string b="";
    for(int i=0;i<s.length();i++)
    if(s[i]!=c) 
	b=b+s[i];
    cout<<b;
    return 0;
}

