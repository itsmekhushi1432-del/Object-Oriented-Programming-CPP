/*A default argument is a value given to a function parameter. If the user doesn't 
pass a value while calling the function, the default value is used.

Default arguments are written in the function declaration, not while calling.
Default arguments must be given from right to left.
*/

#include <iostream>
using namespace std;

void greet(string name = "Guest")
{
    cout << "Hello " << name;
}

int main()
{
    greet();
    greet("Khushi");

    return 0;
}