/*A static data member is shared by all objects of a class.
Instead of each object having its own copy,
the whole class has one common copy.

a static variable is declared inside class and defined outside the class*/

#include<iostream>

using namespace std;
class Student{

    public:
    string name;
    static string university; //common to all objects

};

string Student::university = "LPU";

int main(){
    
    Student s1,s2;

    s1.name = "Kishu";
    s2.name = "Vishu";

    cout<<"Name: "<<s1.name<<endl;
    cout<<"University: "<<s1.university<<endl;
    cout<<endl;

    cout<<"Name: "<<s2.name<<endl;
    cout<<"University: "<<s2.university<<endl;
    return 0;
}