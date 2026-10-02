/*Create a class Book.

Data Member
int *pages;

Requirements

Parameterized Constructor
User Defined Copy Constructor (Deep Copy)
Destructor
Display Function

In main()

Book b1(300);
Book b2 = b1;

*b2.pages = 500;
b1.display();
b2.display();
Expected

300
500
If both print 500,
your Deep Copy is wrong.*/

#include<iostream>

using namespace std;

class Book{

    public:
        int *pages;

        //parameterized constructor
        Book(int a){
            pages = new int;//integer in heap memory
            *pages = a;
        }

        //Copy Constructor

        Book(const Book &obj){
            pages = new int;
            *pages = *obj.pages;
        }

        //display function
        void display(){
            cout<<*pages<<endl;
        }

        //destructor
        ~Book(){
            cout<<"Destructor Invoked"<<endl;
            delete pages;
            pages = nullptr; //for modern c++ compilers
        }

};

int main(){
    
    Book b1(300);
    Book b2 = b1;

    *b2.pages = 500;
    b1.display();
    b2.display();


    return 0;
}