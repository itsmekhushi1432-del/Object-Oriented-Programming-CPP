/*Create a class Employee with:

Employee ID
Salary

Create an object and a pointer to that object.

Take input using the pointer and display the details.*/

#include<iostream>

using namespace std;

class Employee{
    public:

        int empId;
        double salary;

        void display(){

            cout<<"Employee Id: "<<empId<<endl;
            cout<<"Employee Salary: "<<salary<<endl;
            cout<<endl;

        }
};

int main(){
    
    Employee e1,e2;
    //pointer to object
    Employee *ptr1 = &e1;
   /*  ptr1->empId = 31;
    ptr1->salary = 45678.90; */

    //taking input from the user
    //Not required ---> ptr1->empId;
    cout<<"Enter Employee Id: "<<endl;
    cin>>ptr1->empId;

    // Not requires ---> ptr1->salary;
    cout<<"Enter salary: "<<endl;
    cin>>ptr1->salary;

    ptr1->display();

    cout<<"Using object "<<endl;
    e2.empId = 32;
    e2.salary = 45685.70;
    e2.display();


    return 0;
}