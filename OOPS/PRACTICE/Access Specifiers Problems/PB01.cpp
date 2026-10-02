/*Create a class BankAccount.

Private members:

accountNumber
balance

Public functions:

setData()
display()*/


/* Access Specifiers ---> controls who can access the data
1. Public ---> anyone can access the data outside the class
2. Private ---> access data inside the class only
3. Protected ---> can be accessed inside the class and by derived classes
------BY DEFAULT the data members are private inside a class ----
*/

#include<iostream>

using namespace std;

class BankAccount{
    //private attributes
    private:
        int accountNumber;
        double balance;  //balance private ---> to hide data

    public:
        void setData(){
            accountNumber = 2356645; //incase of different objects we can pass valur while calling the function
            balance = 450.78;
        }

        void display(){
            cout<<"Account Number : "<<accountNumber<<endl;
            cout<<"Balance : "<<balance<<endl;
            cout<<endl;
        }

};

int main(){
    BankAccount b1;

    b1.setData();
    b1.display();
    
    return 0;
}