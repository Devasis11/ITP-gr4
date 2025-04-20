/*
6. Write a C++ program to print the pattern
sample output: 
    for n=3                                     for n=2
    123                                         12
    112233                                      1122
    111222333
*/


#include <iostream>
using namespace std;
int main ()
{
    int n,i,j,k;
    cout << "Input n : ";
    cin >> n;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            for(k = 1; k <= i; k++){
                cout << j;
            }
        }
        cout << endl;
    }
    return 0;
}
