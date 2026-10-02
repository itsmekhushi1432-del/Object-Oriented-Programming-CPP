/*Create a class Student with:

Private Data Members
name
rollNo
cgpa
Constructor
Student(string name, int rollNo, double cgpa)

Use the this pointer to initialize all variables.
Member Function
display()
Print all details.
Create
Student s1("Khushi",101,8.33);
Student s2("Aman",102,7.95);
Display both.*/

#include<iostream>

using namespace std;

class Student{
    private:
        //private data members
        string name;
        int rollNo;
        double cgpa;
        
    public:
        //constructor
        Student(string name,int rollNo,double cgpa){
            this->name = name;
            this->rollNo = rollNo;
            this->cgpa = cgpa;
        }

        //member function
        void display(){

            cout<<"Name: "<<name<<endl;
            cout<<"Roll no: "<<rollNo<<endl;
            cout<<"CGPA: "<<cgpa<<endl;
            cout<<endl;

        }

};

int main(){
    
    //object creation
    Student s1("Khushi",101,8.33); //because of parameterized constructor
    Student s2("Aman", 102,7.95);
    //function call
    s1.display();
    s2.display();

    return 0;
}