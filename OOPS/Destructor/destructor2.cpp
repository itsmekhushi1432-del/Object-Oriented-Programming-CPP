/*Create a class Employee.

Requirements:

Constructor should print:
Employee Joined
Destructor should print:
Employee Left
Create three objects
Employee e1;
Employee e2;
Employee e3;*/

#include<iostream>

using namespace std;

class Employee{
    public:

    //constructor
    Employee(){
        cout<<"Employee Joined"<<endl;
    }

    //destructor
    ~Employee(){
        cout<<"Employee Left"<<endl;
    }
};

int main(){
    //object creation
    Employee e1;
    Employee e2;
    Employee e3;

    return 0;
}