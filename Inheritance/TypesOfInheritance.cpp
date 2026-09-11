/*Types of Inheritance
1. Single Inheritance
2. Multilevel Inheritance

Single Inheritance ---> When one child class inherits from one parent class, it is called Single 
Inheritance.

Multilevel Inheritance ---> When a class inherits from another derived class, it is called Multilevel
Inheritance.
Or simply,
A child becomes a parent for another child.

Create three classes.
Class 1
LivingBeing
Function:
live()
prints:
Living Being Exists
Class 2
Animal
inherits from LivingBeing
Function:
eat()
prints:
Animal Eats
Class 3
Dog
inherits from Animal
Function:
bark()
prints:
Dog Barks
Create one Dog object and call:
d1.live();
d1.eat();
d1.bark();*/

#include<iostream>

using namespace std;

class LivingBeing{

    public:

        void live(){
            cout<<"Living Being exists."<<endl;
        }

};

//child class inheriting from LivingBeing
class Animal : public LivingBeing{

    public:

        void eat(){
            cout<<"Animals eat."<<endl;
        }
};

//class dog inherits from animal class
class Dog : public Animal{
    public:

        void bark(){
            cout<<"Dog barks."<<endl;
        }
};

int main(){

    //object creation of third class
    Dog d1;

    d1.live();
    d1.eat();
    d1.bark();
    
    return 0;
}