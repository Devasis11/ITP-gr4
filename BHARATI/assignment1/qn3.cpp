//to find largest digit
#include<iostream>
using namespace std;

int main(){
    int num,big=0,digit;

    //cout<<"number is:";
    cin>>num;
    //n=num;
    while(num){
    digit=num%10;
    if(digit>big)
    big=digit;
    num/=10;
}
    cout<<"big is:"<<big<<endl;
}