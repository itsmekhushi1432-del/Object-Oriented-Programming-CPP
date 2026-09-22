/*A Friend Class is a class that is allowed to access the private and protected members of another class.
Friendship is not inherited.
Friendship is not mutual.
Friendship is not transitive.
*/

#include<iostream>
using namespace std;

class Teacher;

class Student
{
private:

    int marks;

public:

    Student()
    {
        marks = 95;
    }

    friend class Teacher;
};

class Teacher
{
public:

    void display(Student s)
    {
        cout << s.marks;
    }
};

int main()
{
    Student s;

    Teacher t;

    t.display(s);

    return 0;
}