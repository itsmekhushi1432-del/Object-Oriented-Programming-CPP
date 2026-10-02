/*Create a union named Employee.

Members:

Employee ID
Salary
Grade
Store values in this order:
Employee ID
Salary
Grade
After storing all three values, print all three members.*/

#include<iostream>

using namespace std;
union Employee
{
    int employee_ID;
    int salary;
    char grade;
};

int main(){
    
    Employee e1;

    e1.employee_ID = 31;
    e1.salary = 65784;
    e1.grade = 'O';

    cout<<"Employee ID : "<<e1.employee_ID<<endl;
    cout<<"Salary : "<<e1.salary<<endl;
    cout<<"Grade : "<<e1.grade<<endl;


    return 0;
}