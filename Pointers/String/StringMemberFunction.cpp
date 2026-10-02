/*String Member Function

string is also a class, and it has many built-in functions like:
length()
size()
empty()
front()
back()
These are called string member functions.*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name = "Khushi";

    cout <<"Length: "<<name.length()<<endl; //length of string
    cout<<"Size: "<<name.size()<<endl;//Returns the number of characters in a string.
    cout<<"Empty: "<<name.empty()<<endl;//Checks whether the string is empty.
    cout<<"Front: "<<name.front()<<endl;//Returns the first character of the string.
    cout<<"Back: "<<name.back()<<endl;//back character of the string
    

    return 0;
}