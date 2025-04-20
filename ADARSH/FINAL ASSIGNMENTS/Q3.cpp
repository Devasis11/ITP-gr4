//3. Write a C++ program to remove all characters except alphabets in a string.
#include<iostream>
using namespace std;
int main()
{
    string s,n="";
    cout<<"Enter a string: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            n=n+s[i];
    cout<<"String of Alphabets only: "<<n;
    return 0;
}

