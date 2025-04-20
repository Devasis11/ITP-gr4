#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 sides of an triangle:";
    cin>>a>>b>>c;
    if(a==b && a==c && b==c){
        cout<<"Triangle is equilateral.";
    }
    else if(a==b || a==c || b==c){
        cout<<"Triangle is isosceles.";
    }
    else{
        cout<<"Triangle is scalene.";
    }
    return 0;
}
