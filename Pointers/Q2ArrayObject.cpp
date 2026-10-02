/*Create a class Book with:

Book Name
Author Name
Price

Create an array of 5 books.
Take input using a loop.
Display all books.*/

#include<iostream>

using namespace std;

class Book{

    public:
        string bookName;
        string authorName;
        double price;

        void display(){
            cout<<"Book Name: "<<bookName<<endl;
            cout<<"Author Name: "<<authorName<<endl;
            cout<<"Book Price: "<<price<<endl;
            cout<<endl;
        }

};
int main(){
    
    //array of object
    Book b[5];
    
    for (int i = 0; i < 5; i++)
    {
        cin>>b[i].bookName;
        cin>>b[i].authorName;
        cin>>b[i].price;
    }

    cout<<"Displaying complete details"<<endl;
    for (int i = 0; i < 5; i++)
    {
        b[i].display();
    }
    
    


    return 0;
}