/***
Write a C++ program that:

1. Create a Student class containing:
   - int roll
   - char name[20]
   - float cgpa

2. Take details of 5 students from the user.

3. Store all students in a binary file named student.dat.

4. Close the file.

5. Reopen the file in binary read mode.

6. Find the student having the highest CGPA.

7. Display:

Roll:
Name:
CGPA:
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

    // Taking input
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
    fstream file("Student.dat", ios::out | ios::binary);

    // Store all objects
    for (int i = 0; i < 5; i++)
    {
        file.write((char*)&s[i], sizeof(s[i]));
    }

    // Close file
    file.close();

    // Open file in binary read mode
    file.open("Student.dat", ios::in | ios::binary);

    Student temp;
    Student highest;

    bool firstRecord = true;

    // Read all records
    while (file.read((char*)&temp, sizeof(temp)))
    {
        if (firstRecord)
        {
            highest = temp;
            firstRecord = false;
        }
        else if (temp.cgpa > highest.cgpa)
        {
            highest = temp;
        }
    }

    // Close file
    file.close();

    // Display highest CGPA student
    cout << "\nStudent with Highest CGPA\n";
    cout << "Roll : " << highest.roll << endl;
    cout << "Name : " << highest.name << endl;
    cout << "CGPA : " << highest.cgpa << endl;

    return 0;
}