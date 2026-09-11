/*Create a class Company.
Data members:
employeeName (normal)
companyName (static)
Initialize
companyName = "Google"
Create two employees:
Company c1;
Company c2;
Assign:
c1.employeeName = "Khushi";
c2.employeeName = "Aman";
Create a static member function named displayCompany() that prints the company name.
In main():
Print both employee names.
Call Company::displayCompany();*/

#include<iostream>

using namespace std;
class Company{
    public:
        string employeeName;
        static string companyName;

        static void display(){
            cout<<"Company Name: "<<companyName<<endl;
        }

};

string Company::companyName = "Google";

int main(){
    Company c1;
    Company c2;

    c1.employeeName = "Khushi";
    c2.employeeName = "Shreya";

    cout<<"Employee Name: "<<c1.employeeName<<endl;
    cout<<"Employee Name: "<<c2.employeeName<<endl;
    Company::display();
    return 0;
}