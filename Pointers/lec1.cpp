#include<iostream>

using namespace std;

int main(){
    //What is pointer?-------->A pointer is a special variable that stores the memory address of another variable 
    //instead of storing the actual value.

    int a=5;    ///& ---->address of variable{address of operator}
    int* b = &a;// * ------->dereference operator

    cout<<"The address of a is: "<<b<<endl;
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The value stored in a: "<<a<<endl;
    cout<<"The value stored at address b: "<<*b;

    int **c=&b; //pointer to pointer --------> pointer storing address of another pointer
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value stored at address of b is: "<<*b<<endl;
    cout<<"The value stored at address of b is: "<<**c<<endl;
    cout<<"The value stored at address of b is: "<<**c<<endl;

    
    return 0;
}