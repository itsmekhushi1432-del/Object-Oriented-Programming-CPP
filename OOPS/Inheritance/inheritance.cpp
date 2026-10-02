/*Inheritance is the process by which one class acquires (inherits) the properties and 
functions of another class.

In simple words:
A new class can use the data members and member functions of an existing class.

Syntax for derived class
class ChildClass : public ParentClass
{   };
   
Create a class Person.

Member function:
void speak()
{
    cout << "Person is speaking.";
}
Create another class:
Student
that inherits from Person.
Create one object of Student and call:
s1.speak();*/

#include<iostream>

using namespace std;

//parent class
class Pearson{

    public:

        void speak(){
            cout<<"Person is speaking."<<endl;
        }

};

//child class
class Student : public Pearson{

};

int main(){

    //object creation of child class
    Student s1;
    s1.speak();
    
    return 0;
}