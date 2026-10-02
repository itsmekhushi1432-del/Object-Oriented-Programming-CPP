//recursion----->function calling itself until a base condition is met
/*The Three Golden Rules of Recursion ⭐⭐⭐⭐⭐

Every recursive function has 3 parts.
Rule 1: Function calls itself
Rule 2: Base Case
A condition that stops recursion.
Rule 3: Smaller Problem
Every recursive call must move toward the base case.*/
#include<iostream>

using namespace std;

int factorial(int n){
   
   if (n<=1){
    return 1;
   }
    return n * factorial(n-1);
}
int main(){

    //factorial
    //6!=6*5*4*3*2*1=720
    //1!=1 by defination
    //0!=1 by defination
    //n!=n*(n-1)!
    int a;
    cout<<"Enter a:"<<endl;
    cin>>a;

    cout<<"The factorial of "<<a<<" is "<<factorial(a);

    return 0;
}