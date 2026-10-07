/***Create a binary file containing 3 students.

Read only the 2nd student's record using seekg().
***/

#include <iostream>
#include <fstream>

using namespace std;

class Student
{
public:
    int roll;
    char name[20];
    float cgpa;
};

int main()
{
    Student s;

    // Open file in binary write mode
    fstream file("student.dat", ios::out | ios::binary);

    // Enter and store 3 students
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter details of Student " << i << endl;

        cout << "Roll: ";
        cin >> s.roll;

        cout << "Name: ";
        cin >> s.name;

        cout << "CGPA: ";
        cin >> s.cgpa;

        file.write((char*)&s, sizeof(s));
    }

    file.close();

    // Open file in binary read mode
    file.open("student.dat", ios::in | ios::binary);

    // Jump to the 2nd student's record
    file.seekg(sizeof(Student), ios::beg);

    // Read only the 2nd student
    file.read((char*)&s, sizeof(s));

    cout << "\nSecond Student Details\n";
    cout << "Roll : " << s.roll << endl;
    cout << "Name : " << s.name << endl;
    cout << "CGPA : " << s.cgpa << endl;

    file.close();

    return 0;
}