#include <iostream>
using namespace std;

class Employee
{
    int basic;
    int hra;
    int gross;

public:

    void setSalary(int b, int h)
    {
        basic = b;
        hra = h;
    }

    void calculateGross()
    {
        gross = basic + hra;
    }

    void display()
    {
        cout << gross;
    }
};

int main(){
    Employee emp;
    Employee *ptr = &emp;


    int s;
    cin>>s;

    int HRA;
    cin>>HRA;

    ptr->setSalary(s,HRA);
    ptr->calculateGross();
    ptr->display();
    return 0;
}