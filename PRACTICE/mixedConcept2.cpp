/*ABC Pvt. Ltd. has recruited 4 new employees. The HR department wants to automate the salary calculation process.
Each employee has the following details:

Employee ID
Basic Salary
House Rent Allowance (HRA)
Gross Salary

The Gross Salary is calculated using the formula:

Gross Salary = Basic Salary + HRA
Your task is to develop a C++ program that performs the following operations:
Create a class Employee.
Store the following data members:
Employee ID
Basic Salary
HRA
Gross Salary
Create the following member functions:
setValue()
calculateGross()
display()
Use a static data member named count to keep track of the total number of employees created.
Increment count automatically whenever an Employee object is created.
In the main() function:
Create an array of 4 Employee objects.
Accept input for Employee ID, Basic Salary and HRA.
Store the values using setValue().
Calculate the Gross Salary using calculateGross().
Display the details of all employees.
Finally display the total number of employees.
Sample Input
101 25000 5000
102 30000 6000
103 28000 4000
104 35000 7000
Sample Output
Employee ID : 101
Gross Salary : 30000

Employee ID : 102
Gross Salary : 36000

Employee ID : 103
Gross Salary : 32000

Employee ID : 104
Gross Salary : 42000

Total Employees = 4*/

#include<iostream>

using namespace std;

class Employee{
    private:
        static int count;
        
    public:
        int employeeID;
        int basicSalary;
        int  HRA;
        int grossSalary;

        Employee(){
            count++;
        }

        void setValue(int empId, int baseS, int Hra){
            employeeID = empId;
            basicSalary = baseS;
            HRA = Hra;
        }

        void calculateGross(){
            grossSalary = basicSalary + HRA;
        }

        void display(){
            cout<<"Employee ID : "<<employeeID<<endl;
            cout<<"Gross Salary : "<<grossSalary<<endl;
            cout<<endl;
        }

        static int Count(){
            return count;        
        }

};

int Employee :: count = 0;

int main(){
    Employee e[4];

    int empId,baseS,Hra;

    for (int i = 0; i < 4; i++)
    {
        cin>>empId>>baseS>>Hra;

        e[i].setValue(empId,baseS,Hra);
        e[i].calculateGross();
    }

    for (int i = 0; i < 4; i++)
    {
        e[i].display();
    }
    cout<<"Total Employee : "<<Employee::Count<<endl;
    
    
    return 0;
}