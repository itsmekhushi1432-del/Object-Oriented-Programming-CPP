/*Create a class Employee

Data Members

name
id

Static Data Member

companyName
Initialize
Google

Constructor
Employee(string,int)

Create three employees.

Print
Employee Name
Employee ID
Company Name
Also create a static member function to display the company.*/

#include <iostream>

using namespace std;

class Employee
{
public:
    string name;
    int id;

    // static data member
    static string companyName;

    // constructor
    Employee(string n, int i)
    {
        name = n;
        id = i;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }

    static void displayCompany()
    {
        cout << "Company Name: " << companyName << endl;
    }
};

string Employee::companyName = "Google";

int main()
{

    Employee e1("Khushi", 31);
    Employee e2("Vishi", 32);
    Employee e3("Vishu", 33);

    e1.display();
    Employee::displayCompany();
    cout<<endl;

    e2.display();
    Employee::displayCompany();
    cout<<endl;

    e3.display();
    Employee::displayCompany();
    cout<<endl;

    return 0;
}