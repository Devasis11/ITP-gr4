/*7. Write a C++ program to print the pattern
sample output: for n=3                                  sample output: for n=4
               1*2*3                                                    1*2*3*4
               4*5*6                                                    5*6*7*8
               7*8*9                                                    9*10*11*12  */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int x=1;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<x;
            if(j < n)
            cout<<"*";
            x++;
        }
        cout<<"\n";
    }
    return 0;
}
