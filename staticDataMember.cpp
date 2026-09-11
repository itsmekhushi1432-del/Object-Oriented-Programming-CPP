//static data member
#include<iostream>

using namespace std;

class Employee{
    int id;
    static int count; //class variable ---> class property
    // static variable = common to all objects
    // static variable = single variable shared by many
    public:
        void setData(){
            cout<<"Enter id :"<<endl;
            cin>>id;
            count++;
        }
        void getData(){
            cout<<"The Id of the employee is "<<id<<endl;
            cout<<"This is Employee number "<<count<<endl;
        }

};

int Employee :: count; // default value 0
int main(){
    //object
    Employee vishu,kishu;
    //vishu.id = 54;  cannot be accessed as id and count both are private
    //vishu.count = 1;
    vishu.setData();
    vishu.getData();

    kishu.setData();
    kishu.getData();
    return 0;
}