/*Deep Copy ---> Deep Copy copies the actual data by creating a separate memory location instead of 
copying only the address.
OR
Deep Copy creates a completely independent copy of the object and its dynamic memory.*/

//Deep Copy = Independent Memory
//change in one pointer doesn't change other pointer value
#include<iostream>
using namespace std;

int main()
{
    int *ptr1 = new int(25);

    int *ptr2 = new int(*ptr1);

    *ptr2 = 100;

    cout << *ptr1 << endl;

    cout << *ptr2 << endl;
    
    delete ptr1;
    delete ptr2;
    
}