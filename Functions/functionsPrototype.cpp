#include<iostream>

using namespace std;

 // function prototype------> declaring function
 /* type function name (arguments)*/
 // int sum(int a,int b)----->Acceptable
 // int sum(int a, b)-----> Not Acceptable
 // int sum(int ,int )----->Acceptable
int sum(int a,int b){  //formal parameters
    int c = a+b;
    return c;
}
int main(){
   
    int num1,num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;

    cout<<"Enter second number: "<<endl;
    cin>>num2;

    cout<<"The sum is "<<sum(num1,num2);//actual parameters
    return 0;//------->program execution successful{program terminated}
}