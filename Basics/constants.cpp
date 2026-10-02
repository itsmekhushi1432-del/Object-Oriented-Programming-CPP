#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int k = 5;
    cout<<"The value of K is "<<k<<endl;

    k = 10;
    cout<<"Now the value of K is "<<k<<endl<<"Value get changed because K is a variable."<<endl;

    const int h = 7;
    cout<<"The value of H is "<<h<<endl; 

    //-------manipulators-------

    int a = 5 ,b = 34, c = 565, d = 8790;
    cout<<"The Value of A without setwidth is "<<a<<endl;
    cout<<"The Value of B without setwidth  is "<<b<<endl;
    cout<<"The Value of C without setwidth is "<<c<<endl;
    cout<<"The Value of D without setwidth  is "<<d<<endl;

    cout<<"The Value of A with setwidth is "<<setw(4)<<a<<endl;///basically swtwidth added spaces infront of number and make equal length basically inverted triangle
    cout<<"The Value of B with setwidth is "<<setw(4)<<b<<endl;
    cout<<"The Value of C with setwidth is "<<setw(4)<<c<<endl;
    cout<<"The Value of D with setwidth is "<<setw(4)<<d<<endl; 

    //-------operator precedence------
   /*  int a = 3,b=4;
    int c=(a*5)+b-45+87;

    cout<<c; */

    return 0;
}