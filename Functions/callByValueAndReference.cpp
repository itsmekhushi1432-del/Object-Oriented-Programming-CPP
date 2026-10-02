#include<iostream>

using namespace std;

/* int sum(int a,int b){  //formal parameters
    int c = a+b;
    return c;
} */

// to swap two numbers
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    //cout<<"After swapping."<<endl;
    //cout<<"The value of a is "<<a<<endl<<"The value of b is "<<b<<endl;
}

int main(){
    
    int num1,num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;

    cout<<"Enter second number: "<<endl;
    cin>>num2;

    //cout<<"The sum is "<<sum(num1,num2);
    cout<<"The value of a is "<<num1<<endl<<"The value of b is "<<num2<<endl;
    //no swapping as we have called the function by value (A copy of actual parameter is passed to functions)
    //swap(num1,num2);  doesn't snap

    //call by reference
    swap(&num1,&num2);//----->it will work
    cout<<"After swapping."<<endl;
    cout<<"The value of a is "<<num1<<endl<<"The value of b is "<<num2<<endl;


    return 0;
}