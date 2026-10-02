/*Create a class Laptop.

Data members:

Brand
RAM

Create a constructor that initializes:

Brand = HP
RAM = 16

Print both values using a display() function.*/

/*Constructor ---> A constructor is a special member function that is automatically called when an object is created.
A constructor must have the same name as its class.
Constructors never have a return type.
A constructor is called once for every object created.*/
#include<iostream>

using namespace std;


class Laptop{
    public:
        string Brand;
        int RAM;

        //constructor
        Laptop(){
            Brand = "HP";
            RAM = 16;
        }
        
        //member function
        void display(){
            cout<<"Brand : "<<Brand<<endl;
            cout<<"RAM : "<<RAM<<endl;

        }

};

int main(){
    Laptop A1;
    A1.display();

    return 0;
}