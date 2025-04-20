/*
7. Write a C++ program to print the pattern
sample output:
for n=3                  sample output: for n=4
1*2*3                                   1*2*3*4
4*5*6                                   5*6*7*8
7*8*9                                   9*10*11*12
*/   

#include <iostream>
using namespace std;
int main ()
{
    int n,i,j;
    cout << "Enter n : ";
    cin >> n;
    int x = 1;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << x;
            if (j != n - 1) 
                cout << "*";
            x++;
        }
        cout << endl;
    }
    return 0;
}
