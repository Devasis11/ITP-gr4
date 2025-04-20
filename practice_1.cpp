#include<iostream>
using namespace std;
int main(){
    int n;
    for(int n=1;n<=100;n++){
        if(n%15==0){
            cout<<"FizzBuzz";
        }
        else if(n%5==0){
            cout<<"Buzz";
        }
        else if(n%3==0){
            cout<<"Fizz";
        }
        else{
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}
