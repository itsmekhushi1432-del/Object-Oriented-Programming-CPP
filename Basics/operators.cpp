#include<iostream>

using namespace std;
int main(){

    int a,b;
    cout<<"Enter a & b: "<<endl;
    cin>>a>>b;
    
    cout<<"Operators in C++:"<<endl;//endl = newline we can use \n and endl for new lines
    cout<<"Following are the types of operators in C++:"<<endl;

    cout<<"Arithmetic operators"<<endl;

    //arithmetic operators
    cout<<"The value of a+b:"<<a+b<<endl;
    cout<<"The value of a-b:"<<a-b<<endl;
    cout<<"The value of a*b:"<<a*b<<endl;
    cout<<"The value of a/b:"<<a/b<<endl;
    cout<<"The value of a%b:"<<a%b<<endl;//54
    cout<<"The value of a++:"<<a++<<endl;//55
    cout<<"The value of a--:"<<a--<<endl;//54
    cout<<"The value of ++a:"<<++a<<endl;//55
    cout<<"The value of --a:"<<--a<<endl;//54

    //assignment operators --> used to assign value to variables
    //int a=54,b=45;
    //char c = 'P';

    cout<<"Comparsion Operator"<<endl;  

    //comparison operators --> used to compare values
    cout<<"The value of a==b:"<<(a==b)<<endl; //we should use () parenthesis so that compiler won't get confues which output should be given
    cout<<"The value of a>b:"<<(a>b)<<endl;
    cout<<"The value of a<b:"<<(a<b)<<endl;//0 = false, 1= true
    cout<<"The value of a>=b:"<<(a>=b)<<endl;
    cout<<"The value of a<=b:"<<(a<=b)<<endl;
    cout<<"The value of a!=b:"<<(a!=b)<<endl;

    cout<<"Logical Operator"<<endl;

    //logical operator
    cout<<"The value of this logical operator ((a == b)&&(a>b)):"<<((a == b)&&(a>b))<<endl;//and
    cout<<"The value of this logical operator ((a == b)||(a>b)):"<<((a == b)||(a>b))<<endl;//or
    cout<<"The value of this logical operator (!(a == b)):"<<(!(a == b))<<endl;//not
   
    return 0;
}