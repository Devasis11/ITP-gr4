//8. Write a C++ program to check whether a given string is a palindrome. (without using any built-in reverse function
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int i=0,l=s.length()-1;
    while(i<=l)
	{
        if(s[i]!=s[l])
		{
            cout<<"Not a palindrome";
            exit(1);
        }
        i++;
        l--;
    }
    cout<<"It is Palindrome";
    return 0;
}

