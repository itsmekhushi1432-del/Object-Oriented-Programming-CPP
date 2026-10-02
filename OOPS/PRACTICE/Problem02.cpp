/*Create an Employee class with:

name
id
salary

Create two employee objects with different values and print them.*/

#include<iostream>

using namespace std;

class Employee{
    public: 
        //attributes
        string name;
        int id;
        int salary;

};

int main(){
    Employee e1;
    e1.name = "Khushman";
    e1.id = 125;
    e1.salary = 10000;

    Employee e2;
    e2.name = "Shreya Mishra";
    e2.id = 126;
    e2.salary = 20000;

    cout<<"Employee1 name : "<<e1.name<<endl;
    cout<<"Employee Id : "<<e1.id<<endl;
    cout<<"Employee Salary : "<<e1.salary<<endl;

    cout<<"Employee2 name : "<<e2.name<<endl;
    cout<<"Employee Id : "<<e2.id<<endl;
    cout<<"Employee Salary : "<<e2.salary<<endl;


    return 0;
}