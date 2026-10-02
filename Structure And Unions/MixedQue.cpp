/*Create a structure named Student.

Members:
Name
Roll Number
Marks in 5 subjects

Take input for 3 students.
Then print:
Student Name
Roll Number
Total Marks
Average Marks*/

#include<iostream>

using namespace std;

struct Student{
    string name;
    int rollNo;
    int marks[5];

};

int main(){
    Student s[3];

    //input 
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter Name: "<<endl;
        cin>>s[i].name;

        cout<<"Enter Roll number: "<<endl;
        cin>>s[i].rollNo;

        cout<<"Enter marks of 5 subjects: "<<endl;
        for (int j = 0; j < 5; j++)
        {
            cin>>s[i].marks[j];
        }

    }

    cout<<"Output"<<endl;
    for (int i = 0; i < 3; i++)
    {   int total = 0;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Roll No: "<<s[i].rollNo<<endl;

        for (int j = 0; j < 5; j++)
        {
            total += s[i].marks[j];
        }
        double average = total/5.0;
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Average Marks: "<<average<<endl;
        cout<<endl;

    }
    
    
    return 0;
}