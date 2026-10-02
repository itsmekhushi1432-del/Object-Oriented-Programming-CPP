/*When a class contains dynamic memory (pointers), the compiler-generated copy constructor may not be 
enough, and we often write our own copy constructor.*/

#include <iostream>
using namespace std;

class Bank
{
public:
    string name;
    int balance;

    // Parameterized Constructor
    Bank(string n, int b)
    {
        name = n;
        balance = b;
    }

    // User-Defined Copy Constructor
    Bank(const Bank &obj)
    {
        cout << "User-Defined Copy Constructor Called" << endl;

        name = obj.name;
        balance = obj.balance;
    }

    void display()
    {
        cout << "Name    : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    Bank b1("Khushi", 50000);

    Bank b2 = b1;

    cout << endl;

    b2.display();

    return 0;
}