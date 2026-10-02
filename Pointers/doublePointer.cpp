/*Pointer to Pointer {double Pointer} --> 
Pointer → stores address of variable
Double Pointer → stores address of pointer
*/
#include<iostream>
using namespace std;

int main()
{
    int x = 10;

    int *ptr = &x;

    int **pptr = &ptr;

    cout << x << endl;
    cout << ptr << endl;
    cout << pptr << endl;

    return 0;
}