//Write a C++ program to check if a Number is Perfect square using loops
#include<iostream>
using namespace std;

int main(){
int num;
cout<<"enter number:";
cin>>num;

for(int i=1;i*i<=num;i++)
    {
    if(i*i==num){
    cout<<"perfect square"<<endl; 
    return 0;
 }
     
} 
    cout<<"not a perfect square"<<endl;
}



