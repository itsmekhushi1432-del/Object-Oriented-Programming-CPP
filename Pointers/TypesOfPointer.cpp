/*Types of Pointers
NULL Ptr --> A NULL pointer is a pointer that does not point to any valid memory 
location.
Instead of NULL, modern C++ uses: nullptr
We can not access nullptr
Because there is no valid address to access.
This can cause a runtime error or program crash.
*/

#include<iostream>

using namespace std;

int* fun(){
    int x = 100;
    return &x;

};

int main(){
    int *ptr = NULL;
    //we can check before accessing if the pointer is not null 
    /*if (*ptr != NULL)
    {
        cout<<*ptr<<endl;
    }*/

    /*Wild Pointer ---> A Wild Pointer is an uninitialized pointer that points to an 
    unknown or random memory location.
    */
   int *ptr2;//wild pointer
   cout<<*ptr2<<endl; //contain random or garbage value

   /*Dangling Pointer ---> A Dangling Pointer is a pointer that points to memory that
    has already been deleted or is no longer valid.*/

    int *ptr3 = fun();//function terminated so local variable deleted automatically
    ptr3 = nullptr;//to avoid error make it null ptr

    /*Void Pointer --> A Dangling Pointer is a pointer that points to memory that 
    has already been deleted or is no longer valid.*/

     int x = 10;

    void *ptr4;

    ptr4 = &x;
    /* To access value of void pointer we need to typecast 
    Before using a void*, tell the compiler the data type.
    int x = 10;
    void *ptr = &x;
    cout << *(int*)ptr;*/
    

    return 0;
}