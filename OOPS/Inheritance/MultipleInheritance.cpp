/*When one child class inherits from more than one parent class, it is called Multiple Inheritance.
Simple words:
One Child ← Two (or more) Parents

Create two parent classes.
Class 1: Employee
Data Members:
string name;
int id;
Parameterized constructor to initialize both.
Member function:
displayEmployee()
Class 2: Salary
Data Member:
double salary;
Parameterized constructor.
Member function:
displaySalary()
Child Class
Manager
inherits from both classes.
Manager should have:
string department;
Parameterized constructor.
Member function:
displayManager()
Create
Manager m1("Khushi",101,85000,"AI & ML");
Output:
Name : Khushi
ID : 101
Salary : 85000
Department : AI & ML*/

#include<iostream>

using namespace std;
class Employee{
    public:
        string name;
        int id;

        //paramterized constructor
        Employee(string name,int id){
            this->name = name;
            this->id = id;
        }

        //member function
        void displayEmployee(){
            
        }

};

int main(){
    
    return 0;
}