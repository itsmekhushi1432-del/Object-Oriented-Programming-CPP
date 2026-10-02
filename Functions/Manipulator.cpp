/*A Manipulator is a special function used to format the input or output.
endl
setw()
fixed
setprecision()*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pi = 3.141592;

    cout << fixed << setprecision(2);

    cout << pi;

    return 0;
}