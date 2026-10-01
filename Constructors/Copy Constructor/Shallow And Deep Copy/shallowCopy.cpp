/*Shallow Copy copies the address (pointer), not the actual data.
OR
Two pointers point to the same memory location instead of creating a new 
copy of the data.*/

#include<iostream>
using namespace std;

int main()
{
    int *ptr1 = new int(100);

    int *ptr2 = ptr1;

    *ptr1 = 500;

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
}