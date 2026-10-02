/*Array of Objects ---> An Array of Objects is an array in which each element is an object of the same class.

Syntax:
ClassName arrayName[size];
*/
#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
};

int main()
{
    Student s[3];

    for(int i=0;i<3;i++)
    {
        cout<<"Enter Name: ";
        cin>>s[i].name;

        cout<<"Enter Roll Number: ";
        cin>>s[i].rollNo;
    }

    cout<<"\nOutput\n";

    for(int i=0;i<3;i++)
    {
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Roll Number: "<<s[i].rollNo<<endl;
    }

    return 0;
}