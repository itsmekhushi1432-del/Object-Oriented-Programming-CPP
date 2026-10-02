/*a pointer doesn't move 1 byte every time.
It moves according to the size of the data type.
*/

#include<iostream>
using namespace std;

int main()
{
    int x = 10;

    int *ptr = &x;

    cout << ptr << endl;

    ptr++;

    cout << ptr << endl;

    // pointer addition
    ptr = ptr + 3;
    cout<<ptr<<endl;

    //Pointers can not be multiplied and divided

    return 0;
}