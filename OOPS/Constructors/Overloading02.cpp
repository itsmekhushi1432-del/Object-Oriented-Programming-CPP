/*Create a class Student.
Constructor 1
Student()
Initialize
Name = Unknown
Marks = 0
Constructor 2
Student(string,int)
Initialize using user values.
Create
Student s1;
Student s2("Khushi",95);
Display both.*/

#include<iostream>

using namespace std;

class Student{
    public:
        string name;
        int marks;
    //default constructor
        Student(){
            name = "Unknown";
            marks = 0;
        }
        //parameterized constructor
        Student(string n ,int m){
            name = n;
            marks = m;
        }
        //display
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Marks : "<<marks<<endl;
            cout<<endl;
        }

};

int main(){
    Student s1;
    Student s2("Khushi",98);
    
    s1.display();
    s2.display();
    
    return 0;
}