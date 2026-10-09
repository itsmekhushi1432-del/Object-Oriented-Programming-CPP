/*Write a C++ program that:

Create a Student class containing:
int roll
char name[20]
float cgpa
Take details of 5 students from the user.
Store all students in a binary file student2.dat.
Ask the user to enter a record number (1–5).
Display the details of only that record using seekg().
Example

Suppose the file contains

Record	Roll	Name	CGPA
1	101	Aman	8.1
2	102	Khushi	9.0
3	103	Riya	8.5
4	104	Rohit	7.9
5	105	Neha	9.3

Input

Enter record number:
4

Output

Roll : 104
Name : Rohit
CGPA : 7.9*/

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

    // Store all students in binary file
    fstream file("student2.dat", ios::out | ios::binary);

    for (int i = 0; i < 5; i++)
    {
        file.write((char*)&s[i], sizeof(s[i]));
    }

    file.close();

    // Ask record number
    int record;

    cout << "\nEnter record number (1-5): ";
    cin >> record;

    // Open file in read mode
    file.open("student2.dat", ios::in | ios::binary);

    Student temp;

    // Move pointer directly to required record
    file.seekg((record - 1) * sizeof(Student), ios::beg);

    // Read only one object
    file.read((char*)&temp, sizeof(temp));

    // Display
    cout << "\nStudent Details\n";
    cout << "Roll : " << temp.roll << endl;
    cout << "Name : " << temp.name << endl;
    cout << "CGPA : " << temp.cgpa << endl;

    file.close();

    return 0;
}