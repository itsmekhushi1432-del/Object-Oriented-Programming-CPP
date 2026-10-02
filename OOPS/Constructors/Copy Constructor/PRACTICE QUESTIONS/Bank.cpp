/*Create class
BankAccount

Data Members
int accountNo;
string holderName;
double *balance;

Requirements
Parameterized Constructor
Deep Copy Constructor
Destructor
Deposit Function
deposit(double amount);

In main()

BankAccount b1(101,"Khushi",5000);
BankAccount b2 = b1;
b2.deposit(2000);

b1.display();
b2.display();

Expected
5000
7000
If both become
7000
You accidentally implemented Shallow Copy.*/

#include<iostream>

using namespace std;

class BankAccount{

    public:
        int accountNo;
        string holderName;
        double *balance;

        //parameterized constructor 
        BankAccount(int no,string n,double b){
            accountNo = no;
            holderName = n;
            balance = new double; //new double in heap memory
            *balance = b;
        }

        //user defined copy constructor
        BankAccount(const BankAccount &obj){
            accountNo = obj.accountNo;
            holderName = obj.holderName;
            balance = new double;
            *balance = *obj.balance;
        }

        //deposit function
        void deposit(double amount){
            *balance += amount;
        }

        //display function
        void display(){
            cout<<*balance<<endl;
        }

        //destructor
        ~BankAccount(){
            delete balance;
            balance = nullptr;
        }
};

int main(){
    
    BankAccount b1(101,"Kuhu",5000);
    BankAccount b2 = b1;
    b2.deposit(2000);
    b1.display();
    b2.display();
    return 0;
}