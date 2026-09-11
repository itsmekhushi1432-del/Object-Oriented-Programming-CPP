/*Constructor Overloading means having more than one constructor in the same class with different parameter lists.
The name stays the same.
Only the parameters change.*/

/*Create a class Book.
Write:
Book()
Print:
Default Book Created
Write another constructor:
Book(string title)
Print the title.
Create two objects:
Book b1;
Book b2("C++ Programming");*/

#include<iostream>

using namespace std;
class Book{
    public: 
    //default parameter
        Book(){
            cout<<"Default Book Created"<<endl;
        }
        //parameterized constructor
        Book(string title){
            cout<<"Title Of the Book : "<<title<<endl;
        }
};

int main(){
    Book b1;//will go to default constructor
    Book b2("C++ Programming");// will go to parameterized constructor
    return 0;
}
