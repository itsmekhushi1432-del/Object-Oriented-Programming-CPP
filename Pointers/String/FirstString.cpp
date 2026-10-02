/*A String is a collection (sequence) of characters stored together.
⚠ Problem with cin

Suppose the user enters
Lovely Professional University
What happens?
cin reads only
Lovely
because cin stops when it finds a space.

⭐ Solution: getline()
To read the complete line, use
getline(cin, name);*/

#include<iostream>
#include<string>//including string library
using namespace std;

int main()
{
    string college;

    cout << "Enter College Name: ";

    getline(cin, college);

    cout << college;

    return 0;
}