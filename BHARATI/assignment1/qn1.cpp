//Write a program to print the numbers from 1 to 100, but           
// replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz" and if divisible
// by both print “FizzBuzz”.
#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0 && i%5!=0)
        cout<<"fizz";
        else if (i%5==0 && i%3!=0)
        cout<<"buzz";
        else if(i%3==0 || i%5==0)
        cout<<"fizzbuzz";
        else
        cout<<i;
        cout<<endl;
    }
}