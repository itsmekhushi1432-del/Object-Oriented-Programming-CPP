/*Create class

Employee

Data Members

int id;

string name;

double salary;

Requirements

Parameterized Constructor (Initializer List)
Copy Constructor
Destructor printing
Object Destroyed
Display Function

Create

Employee e1(101,"Khushi",60000);

Employee e2 = e1;

Employee e3(e2);

Display all.*/

#include<iostream>

using namespace std;

class Employee{

    public:
        int id;
        string name;
        double salary;

        //parameterized constructor initializer list
        Employee(int i,string n,double s):id(i),name(n),salary(s){

        }

        //copy constructor
        Employee(const Employee &obj){
            id = obj.id;
            name = obj.name;
            salary = obj.salary;
        }

        //destructor
        ~Employee(){
            cout<<"Object Destroyed"<<endl;
        }

        //display function
        void display(){
            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<endl;
        }

};

int main(){
    
    Employee e1(101,"Khushi",60000);
    Employee e2 = e1;//copy constructor called

    Employee e3(e2); //direct initialization also call copy constructor

    e1.display();
    e2.display();
    e3.display();
    return 0;
}