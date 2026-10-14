/*/***
Write a C++ program that:

Create a Student class containing:
int roll
char name[20]
float cgpa

Take details of 5 students from the user.

Store all students in a binary file named student.dat.

Close the file.

Reopen the file in binary read mode.

Count the total number of student records present in the file.

Display:
Total Students = 5
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
    // Array of objects
    Student s[5];

    // Taking input for 5 students
    cout << "Enter details of 5 students:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll: ";
        cin >> s[i].roll;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "CGPA: ";
        cin >> s[i].cgpa;
    }

    // Open binary file in write mode
    fstream file("student123.dat", ios::out | ios::binary);

    // Store all student objects in the file
    for (int i = 0; i < 5; i++)
    {
        file.write((char*)&s[i], sizeof(s[i]));
    }

    // Close file
    file.close();

    // Open file in binary read mode
    file.open("student123.dat", ios::in | ios::binary);

    Student temp;
    int count = 0;

    // Count the number of records
    while (file.read((char*)&temp, sizeof(temp)))
    {
        count++;
    }

    // Close file
    file.close();

    // Display total number of students
    cout << "\nTotal Students = " << count << endl;

    return 0;
}*/