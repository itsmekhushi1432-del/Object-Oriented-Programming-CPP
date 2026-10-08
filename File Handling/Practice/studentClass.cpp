/*Write a C++ program that:

Create a Student class containing:
int roll
char name[20]
float cgpa
Take details of 5 students from the user.
Store all 5 objects in a binary file named student.dat.
Close the file.
Ask the user to enter a roll number to search.
Reopen the file in binary read mode.
Search the file one object at a time.
If the roll number is found, display:
Roll:
Name:
CGPA:
Otherwise print:
Student Not Found*/

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
    
    //array of object
    Student s[5];

    //taking input for 5 objects
    for (int i = 0; i < 5; i++)
    {
        cin>>s[i].roll;
        cin>>s[i].name;
        cin>>s[i].cgpa;
    }

    //binary files
    fstream file("student.dat",ios::out | ios::binary);

    //storing all 5 objects values in binary files
    file.write((char*)&s,sizeof(s));

    //closing file
    file.close();

    //roll number to search
    int searchRoll;
    cin>>searchRoll;

    //binary file in read mode
    fstream file2("student.dat",ios::in | ios::binary);

    //temporary object of class Student
    Student temp;
    bool found = false;

    //reading from file
    while (file2.read((char*)&temp,sizeof(temp)))
    {
        if (temp.roll == searchRoll)
        {
            found = true;
            break;
        } 
    }

    //printing value
    if(found == true){
        cout<<"Roll: "<<temp.roll<<endl;
        cout<<"Name: "<<temp.name<<endl;
        cout<<"CGPA: "<<temp.cgpa<<endl;
    }else{
        cout<<"Student not found"<<endl;
    }

    //closing file
    file2.close();

    return 0;
}