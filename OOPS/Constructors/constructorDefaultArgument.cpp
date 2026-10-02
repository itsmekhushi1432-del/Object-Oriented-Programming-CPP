/*Constructor with default arguments*/

#include<iostream>
using namespace std;

class Student
{
public:

    //default argument always written right to left
    Student(string name, int age = 18)
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Student s1("Khushi", 19);

    cout << endl;

    Student s2("Rahul");
}