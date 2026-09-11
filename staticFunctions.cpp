// static function ---> made when we want to access all static variable / members only or a function run with a class name only not require any object

#include<iostream>

using namespace std;

class Employee{
    int id;
    static int count; 
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
        static void getCount(void){
            //cout<<id; throws an error
            cout<<"The value of count is "<<count<<endl;
        }

};

int Employee :: count; // default value 0
int main(){
    //object
    Employee vishu,kishu;
    
    vishu.setData();
    vishu.getData();

    Employee :: getCount();
    kishu.setData();
    kishu.getData();
    Employee :: getCount();
    return 0;
}