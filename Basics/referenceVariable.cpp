#include<iostream>

using namespace std;

int c=49; //its a global variable but we have another local variable c that will get preference
int main(){

    //---------built in datatypes------
    /* int a,b,c;

    //taking 2 values input
    cout<<"Enter first value:"<<endl;
    cin>>a;

    cout<<"Enter second value:"<<endl;
    cin>>b;

    c = a+b;
    cout<<"The sum is:"<<c<<endl;
    cout<<"The global c is:"<<::c<<endl;//::scope resolution operator to get value of global operator
 */
   //-------float,double and long double literals--------

   /*  float d = 45.5f;/*by default compiler take decimal value as double so we need to specify 
    it's a float using f the difference will be seen on function overloading */
    /*long double e = 45.5;
    
    cout<<"The value of d:"<<d<<endl<<"The value of e:"<<e<<endl;

    cout<<"Let's find out the size of d"<<endl;
    //size of
    cout<<"The size of 45.5 : "<<sizeof(45.5)<<endl;
    cout<<"The size of 45.5f : "<<sizeof(45.5f)<<endl;
    cout<<"The size of 45.5F : "<<sizeof(45.5F)<<endl;
    cout<<"The size of 45.5l : "<<sizeof(45.5l)<<endl;
    cout<<"The size of 45.5L : "<<sizeof(45.5L)<<endl; */

    //--------reference variables------- Calling a value by different reference or we want to point two different references to same 1 value 
    //Khushi---->kuhu----->kuchi----->kush
    /* float x = 455;
    float &y = x;//y is a reference variable

    cout<<x<<endl;
    cout<<y<<endl; */

    //------Type Casting-----------
    int z=45;
    float k = 3.145;
    cout<<"The value of z is "<<z<<endl;
    cout<<"The value of k is "<<k<<endl;

    cout<<"After typecasting"<<endl;
    cout<<"The value of z is "<<float(z)<<endl;
    cout<<"The value of k is "<<int(k)<<endl;

    int h = int (k);
    cout<<"The value of h is "<<h<<endl;

    cout<<"The expression is "<<z+k<<endl;
    cout<<"The expression is "<<z+int(k)<<endl;
    cout<<"The expression is "<<z+(int)k<<endl;



    return 0;
}