#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int i=sqrt(n);
    if(i*i==n){
        cout<<n<<" is a perfect square.";
    }
    else{
        cout<<n<<" is not a perfect square.";
    }
    return 0;
}
