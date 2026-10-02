/*Pointer to data member --> A Pointer to Data Member is a special pointer that points to a data member 
(variable) of a class, not to an object.

Syntax:
dataType ClassName::*pointerName;*/

#include<iostream>
using namespace std;

class Student
{
public:
    int marks = 90;
};

int main()
{
    Student s;

    int Student::*ptr = &Student::marks;

    cout << s.*ptr;

    return 0;
}