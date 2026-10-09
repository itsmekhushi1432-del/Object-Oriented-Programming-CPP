/*Write a C++ program that:

Create a Student class containing:
int roll
char name[20]
float cgpa
Take details of 5 students from the user.
Store all students in a binary file named students1.dat.
Ask the user to enter a roll number whose CGPA needs to be updated.
Ask for the new CGPA.
Search the file one object at a time.
If the roll number is found:
Update only the CGPA.
Write the updated object back to the same position using seekp().
Do not rewrite the entire file.
Finally, reopen the file and display all students to verify the update.*/

#include<iostream>
#include<fstream>

using namespace std;

class Student{

    public:
        int roll;
        char name[20];
        float cgpa;

};

int main(){
    
    //object creation
    Student s[5];

    //input
    cout<<"Enter details of 5 students: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Roll No: ";
        cin>>s[i].roll;

        cout<<"Name: ";
        cin>>s[i].name;

        cout<<"CGPA: ";
        cin>>s[i].cgpa;
    }

    //storing in binary files
    fstream file("students1.dat",ios::out | ios::binary);
    
    for (int i = 0; i < 5; i++)
    {
        file.write((char*)&s[i],sizeof(s[i]));
    }

    file.close();

    // Roll number whose CGPA is to be updated
    int searchRoll;
    cout << "\nEnter Roll Number: ";
    cin >> searchRoll;

    float newCGPA;
    cout << "Enter New CGPA: ";
    cin >> newCGPA;

     // Open file in read + write mode
    file.open("students1.dat", ios::in | ios::out | ios::binary);

    Student temp;
    bool found = false;

    while(file.read((char*)&temp, sizeof(temp)))
    {
        if(temp.roll == searchRoll)
        {
            found = true;

            // Update CGPA
            temp.cgpa = newCGPA;

            // Move write pointer back one object
            file.seekp(-sizeof(Student), ios::cur);

            // Write updated object
            file.write((char*)&temp, sizeof(temp));

            break;
        }
    }

    file.close();

    if(found)
        cout << "\nRecord Updated Successfully.\n";
    else
        cout << "\nStudent Not Found.\n";

    // Display all students
    file.open("students1.dat", ios::in | ios::binary);

    cout << "\nUpdated Records\n\n";

    while(file.read((char*)&temp, sizeof(temp)))
    {
        cout << "Roll : " << temp.roll << endl;
        cout << "Name : " << temp.name << endl;
        cout << "CGPA : " << temp.cgpa << endl;
        cout << endl;
    }

    file.close();


    
    
    return 0;
}