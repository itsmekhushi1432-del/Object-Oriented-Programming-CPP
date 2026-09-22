/***Create a class BankAccount

Private
accountNumber
balance

Parameterized Constructor
Friend Function
showDetails()

Create two accounts.
Friend function should print private data.
***/

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:

    // Parameterized Constructor
    BankAccount(int accountNumber, double balance)
    {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    // Friend Function Declaration
    friend void show(BankAccount, BankAccount);
};

// Friend Function Definition
void show(BankAccount B1, BankAccount B2)
{
    cout << "Account 1" << endl;
    cout << "Account Number: " << B1.accountNumber << endl;
    cout << "Balance: " << B1.balance << endl;
    cout << endl;

    cout << "Account 2" << endl;
    cout << "Account Number: " << B2.accountNumber << endl;
    cout << "Balance: " << B2.balance << endl;
}

int main()
{
    BankAccount B1(24324, 740.60);
    BankAccount B2(26824, 5648.50);

    show(B1, B2);

    return 0;
}