#include<iostream>

using namespace std;

int add(int a,int b){
    cout<<"Using function with two arguments"<<endl;
    return a+b;

}
  int add(int a,int b,int c){
    cout<<"Using function with three arguments"<<endl;
    return a+b+c;

}

//volume of cylinder
int volume(double r,double h){
    return (3.14*r*r*h);
}

//volume of cube
int volume(int a){
    return (a*a*a);
}

//volume of rectangle
int volume(int l,int b,int h){
    return (l*b*h);
}


int main(){
    //function overloading-----> overloading(using a thing for multiple tasks)---->Function overloading means having multiple functions with the same name but different parameter lists.
    //polymorphism --->same thing on different form
    cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<add(3,7,6)<<endl;
    cout<<"The volume of rectangular box of 3, 7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"The volume of cube of 3 is "<<volume(3)<<endl;
    return 0;
}