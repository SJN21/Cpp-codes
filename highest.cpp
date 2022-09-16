#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter 3 numbers : ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"The highest number is : "<<a;
        }
        else{
            cout<<"The highest number is : "<<c;
        }
    }
    else{
        if(b>c){
            cout<<"The highest number is: "<<b;
        }
        else{
            cout<<"The highest number is : "<<c;
        }
    }
}