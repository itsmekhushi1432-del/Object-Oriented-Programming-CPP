/*A union is a user-defined data type in which all data members share the same memory location.
Union saves memory because only one member can store a value at a time.
New value overwrites the previous one
*/

#include <iostream>
using namespace std;

union Data
{
    int integer;
    float decimal;
    char character;
};

int main()
{
    Data d;

    // Store integer
    d.integer = 100;
    cout << "Integer = " << d.integer << endl;

    // Store float
    d.decimal = 99.5;
    cout << "Float = " << d.decimal << endl;

    // Store character
    d.character = 'A';
    cout << "Character = " << d.character << endl;

    cout << "\nAfter storing all values:" << endl;
    cout << "Integer = " << d.integer << endl;
    cout << "Float = " << d.decimal << endl;
    cout << "Character = " << d.character << endl;

    return 0;
}