/*Create a class Laptop having:

Data Members
int laptopId;
string company;
int ram;
Requirements
Create a parameterized constructor to initialize all data members.
Create a copy constructor.
Create a display() function.
In main():
Create object
Laptop l1(101,"HP",16);
Create another object using copy constructor.
Laptop l2 = l1;
Display both objects.
Extra Requirement (Important)

Inside the copy constructor print

Copy Constructor Invoked*/

#include<iostream>

using namespace std;

class Laptop{

    public:
        int laptopId;
        string company;
        int ram;

        //parameterized constructor
        Laptop(int id,string cmp,int rm){
            laptopId = id;
            company = cmp;
            ram = rm;
        }

        
        //display funciton
        void display(){
            cout<<"Laptop ID: "<<laptopId<<endl;
            cout<<"Company: "<<company<<endl;
            cout<<"RAM: "<<ram<<endl;
            cout<<endl;
        }

        //copy constructor
        Laptop(const Laptop &obj){
            laptopId = obj.laptopId;
            company = obj.company;
            ram = obj.ram;
            cout<<"Copy Constructor Invoked"<<endl;
        }

};

int main(){
    
    Laptop l1(101,"HP",16);
    l1.display();

    Laptop l2 = l1;
    l2.display();
    return 0;
}