/*Enum = a user-defined data type containing a fixed set of named constant values.
syntax
enum EnumName {
    value1,
    value2,
    value3
};
By default, enumeration values start from 0.*/

#include <iostream>
using namespace std;

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY
};

int main() {

    Day today = TUESDAY;

    cout << today;

    return 0;
}