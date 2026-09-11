// Arrays of objects

#include<iostream>

using namespace std;

class Employee{
    int id;
    int salary;

    public:
        void setId(void){
            salary = 15000;
            cout<<"Enter the Id of Employee: "<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"The Id of Employee is "<<id<<endl;
        }
};

int main(){
   /*  Employee kishu,vishu,vihu,pihu;

    kishu.setId();
    kishu.getId(); */

    Employee fb[4];
    
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
    return 0;
}