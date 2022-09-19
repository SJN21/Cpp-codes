#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;

    
    // Binary Operators
    // +,-,*,/,%
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<a+b<<" "<<a-b<<" "<<a*b<<" "<<a/b<<" "<<a%b;



    // Unary operator
    c=(a++) + 5;  // value of a is 8 so 8+5=13 then value of a is incremented to 9 after calculating this
    d=(++a) +5; // value of a is 9 it is first incremented to 10 then 5 is added so 15
    cout<<"\nvalue of a is:"<<a<<"\nvalue of a++ + 5 is"<<c<<"\nvalue of ++a +5 is:"<<d<<"\n";



    // Relational Operators- Returns a boolean value
    // ==,!=,>,<,>=,<=
    a=8;
    cout<<a<<" "<<(a==6)<<" "<<(a!=6)<<" "<<(a<6)<<" "<<(a>6)<<" "<<(a>=6)<<" "<<(a<=6);



    // Logical operators
    // &&-and,||-or,!-not  (To combine two or more conditions)
    if(a>=6 || b>=6){
        cout<<"\nNice";
    }



    // Bitwise Operator
    // &-logical and , |-logical or, ~ -1's complement, ^ - ex-or, << -leftshift op., >> - right shift op


    // Misclaneous operators
    // sizeof()                 finds size
    // condition?a:b            ternary operator if cond. true than prints a else b
    // cast                     converts one datatype to other dtype(var)
    // comma(,)                 if we write a=(2,3,4) to je last value hoy e assign thay matlab a=4
    // &                        return the address of var
    // *                        pointer variable 
}