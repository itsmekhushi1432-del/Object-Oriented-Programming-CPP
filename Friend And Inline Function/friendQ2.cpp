/*Create a class BankAccount.
Private members:
accountNumber
balance
Constructor initializes:
accountNumber = 12345
balance = 50000
Create a friend function:
showDetails(BankAccount);
Print both private variables.
Call the function from main().*/

#include<iostream>

using namespace std;

class BankAccount{

    private:
        int accountNumber;
        int balance;

    public:
        BankAccount(){
            accountNumber = 12345;
            balance = 50000;
        }

    //friend function
    friend void showDetails(BankAccount);

};

void showDetails(BankAccount A1){

    cout<<"Account Number: "<<A1.accountNumber<<endl;
    cout<<"Balance: "<<A1.balance<<endl;

}

int main(){
    
    BankAccount A1;
    showDetails(A1);
    
    return 0;
}