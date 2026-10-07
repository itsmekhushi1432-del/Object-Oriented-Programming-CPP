/*Create a Student class containing:
int roll
char name[20]
float cgpa
Take input from the user.
Store the object in a binary file student.dat.
Read the object back.
Display all details.*/

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
    
    Student s;
    cout<<"Enter roll no.: "<<endl;
    cin>>s.roll;

    cout<<"Enter name: "<<endl;
    cin>>s.name;

    cout<<"Enter cgpa: "<<endl;
    cin>>s.cgpa;

    fstream file("student.dat",ios::out | ios::binary);
    file.write((char*)&s,sizeof(s));

    file.close();

    file.open("student.dat",ios::in | ios::binary);
    file.read((char*)&s,sizeof(s));

    cout<<s.roll<<endl;
    cout<<s.name<<endl;
    cout<<s.cgpa<<endl;

    file.close();

    return 0;
}