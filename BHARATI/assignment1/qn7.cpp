// Write a C++ program to print the pattern
// sample output: for n=3                  sample output: for n=4
// 1*2*3                                                 1*2*3*4
// 4*5*6                                                 5*6*7*8
// 7*8*9                                                 9*10*11*12

#include<iostream>
using namespace std;

int main(){
    int n,g=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<g;
        if(j<n)
        cout<<"*";
        g++;
    }
    cout<<endl;
}
}