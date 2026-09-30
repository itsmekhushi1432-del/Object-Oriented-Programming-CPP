/*Copy Constructor---> A Copy Constructor is a constructor that creates a new object as a copy of an 
existing object.

syntax:-
ClassName(const ClassName &obj)
{
    // Copy data
}
*/

#include<iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;

    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(const Student &obj)
    {
        name = obj.name;
        age = obj.age;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

int main()
{
    Student s1("Khushi",19);

    Student s2 = s1;

    s1.display();

    cout<<endl;

    s2.display();
}