/*Pointer To Object -----> A pointer to an object is a pointer that stores the address of an 
object.
Syntax:-
ClassName objectName;
ClassName *pointerName = &objectName;

//example:-
Student s;
Student *ptr = &s;
*/

/*⭐ Why Do We Need Pointer to Objects?

Because it helps in
Dynamic Objects
Passing objects efficiently
Linked Lists
Trees
Graphs
Large programs*/

#include<iostream>
using namespace std;

class Student
{
public:
    string name;

    void display()
    {
        cout<<"Name : "<<name;
    }
};

int main()
{
    Student s;

    Student *ptr = &s;
    ptr->name = "Khushi";

    cout<<"Name: "<<(*ptr).name<<endl;

    ptr->display();//another way to access or to call function 

    return 0;
}