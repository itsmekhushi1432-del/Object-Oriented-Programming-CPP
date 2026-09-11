/*Create a class Employee with:
name
id
salary
Write a constructor:
Employee(string name, int id, double salary)
Use the this pointer to initialize all three variables.
Create two objects:
Employee e1("Khushi",101,50000);
Employee e2("Aman",102,60000);
Display the details of both employees.*/

#include<iostream>

using namespace std;

class Employee{
    public:
        string name;
        int id;
        int salary;

        Employee(string name,int id,int salary){
            this ->name = name;
            this ->id = id;
            this ->salary = salary;
        }

        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"ID : "<<id<<endl;
            cout<<"Salary : "<<salary<<endl;
            cout<<endl;
        }

};

int main(){
    
    Employee e1("Khushi",101,50000);
    e1.display();
    Employee e2("Aman",102,60000);
    e2.display();
    return 0;
}