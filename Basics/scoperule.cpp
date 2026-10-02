/*Local Variable

A variable declared inside a function or block.
It can only be used inside that function/block.

Global Variable

A variable declared outside all functions.
It can be used by every function in the program.

*/

//global variable
#include <iostream>
using namespace std;

int age = 19;

void display()
{
    cout << age << endl;
}

int main()
{
    cout << age << endl;

    display();

    return 0;
}

//local variable
#include <iostream>
using namespace std;

void display()
{
    cout << age;
}

int main()
{
    int age = 19;

    display();

    return 0;
}