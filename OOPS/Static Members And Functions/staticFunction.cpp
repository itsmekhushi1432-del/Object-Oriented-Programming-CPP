/*A static member function belongs to the class instead of any object.*/

#include<iostream>
using namespace std;

class Student
{
public:

    static string university;

    static void display()
    {
        cout << university;
    }
};

string Student::university = "LPU";

int main()
{
    Student::display(); //Can directly access only static members
}