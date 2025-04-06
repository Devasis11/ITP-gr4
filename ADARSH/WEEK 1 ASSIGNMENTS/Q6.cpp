/*6. Write a C++ program to print the pattern
Sample output: for n=3                                     for n=2
                123                                        12
                112233                                     1122
                111222333                                                     */
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    for (int i=1;i<=n;i++) 
	{
        for (int j=1;j<=n;j++) 
		{
            for (int l=1;l<=i;l++) 
			{
                cout<<j;
            }
        }
        cout<<endl;
    }
return 0;
}

