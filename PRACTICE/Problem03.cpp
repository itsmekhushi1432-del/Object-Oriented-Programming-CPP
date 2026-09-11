/*Create a class Student with:

name
marks

Also add a member function:

void display()

which prints both the name and the marks.

Create two student objects and call display() for each.*/

#include<iostream>

using namespace std;

class Student{
    public:
    //data members
        string name;
        int marks;

    //member function --> basically the function inside class that perform the task
    // also the functions that are common to other member also
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<endl;
    }

};

int main(){
    //object creation
    Student s1;
    Student s2;

    //assigning value 
    s1.name = "Khush";
    s1.marks = 80;
    s2.name = "Vishi";
    s2.marks = 78;

    s1.display();
    s2.display();
    
    return 0;
}