#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int max=0;
    int i;
    while(n>0){
        i=n%10;
        if(i>max){
            max=i;
        }
        n/=10;
    }
    cout<<max<<" is the larger digit.";
    return 0;
}
