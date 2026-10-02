#include<iostream>

using namespace std;

int fib(int n){
    if(n<=2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
    //fib(5)----->fib(3)+fib(4)
}
int main(){
    //fibonacci series --->1 1 2 3 5 8 13
    //basically next element is sum of the previous two elements
    int a;
    cout<<"Enter a:"<<endl;
    cin>>a;

    cout<<"The term in fibonacci series at position "<<a<<" is "<<fib(a);
    return 0;
}