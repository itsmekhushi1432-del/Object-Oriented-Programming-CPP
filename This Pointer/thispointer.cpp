/*this is a special pointer that automatically points to the current object that
is calling the member function.*/

/*Create a class Book with:
title
price
Use a constructor with parameters:
Book(string title, double price)
Use the this pointer to initialize both variables.
Create one object:
Book b1("C++ Programming", 499.99);
Create a display() function to print both values.*/

#include<iostream>

using namespace std;

class Book{
    public: 
        //data members
        string title;
        double price;

        //parameterized constructor
        Book(string title, double price){
            this -> title = title;
            this -> price = price;

        }

        //member function
        void display(){
            cout<<"Title: "<<title<<endl;
            cout<<"Price: "<<price<<endl;
        }

};

int main(){
    //object creation
    Book b1("C++ Programming", 499.99);
    b1.display();
    return 0;
}