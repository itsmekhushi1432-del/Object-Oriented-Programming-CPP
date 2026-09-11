/*Create a Book class with:

title
author
price

Create one object and print all values.*/

#include<iostream>

using namespace std;

//creation of class named as Book
class Book{
    public: // allow to access outside the class also
    //attributes{properties} of the class
        string title;
        string author;
        double price;
};

int main(){
    //object creation
    Book b1;
    b1.title = "ABC";
    b1.author = "Rituraj Singh";
    b1.price = 450.50;

    cout<<"Book Title : "<<b1.title<<endl;
    cout<<"Book Author : "<<b1.author<<endl;
    cout<<"Book Price : "<<b1.price<<endl;
    return 0;
}