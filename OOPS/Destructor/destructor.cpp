/*A destructor is a special member function that is automatically called when an
object is destroyed.It releases the memory
Rule 1
The destructor name must be the same as the class name, but with ~.
Rule 2
It has no return type.
Rule 3
It has no parameters.
Rule 4
A class can have only one destructor.
Unlike constructors, destructors cannot be overloaded

When the program ends,
objects are destroyed in reverse order.
follows stack lifo*/


/*Create a class Car.

Requirements:

Write a constructor that prints:
Car Started
Write a destructor that prints:
Car Stopped
Create one object named c1.
Expected Output
Car Started
Car Stopped*/
#include<iostream>

using namespace std;

class Car{
    public:
        //constructors
        Car(){
            cout<<"Car started"<<endl;
        }

        //destructor
        ~Car(){
            cout<<"Car stopped"<<endl;
        }

};


int main(){
    Car c1;
    return 0;
}