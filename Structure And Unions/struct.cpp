/*A Structure is a user-defined data type that groups different types of data into a single unit.

Create a structure named Book having:

Book Name
Author Name
Price

Create 3 book objects, take input from the user, and display all the details.
Sample Output
Book 1
Name : Atomic Habits
Author : James Clear
Price : 450

Book 2
Name : Clean Code
Author : Robert Martin
Price : 650

Book 3
...*/

#include<iostream>

using namespace std;

struct Book
{
    string bookName;
    string authorName;
    double price;
};

int main(){
    //structure array
    Book b[3];

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter Book Name : "<<endl;
        cin>>b[i].bookName;

        cout<<"Enter Author Name : "<<endl;
        cin>>b[i].authorName;

        cout<<"Enter Book Price: "<<endl;
        cin>>b[i].price;
    }

    //printing the output
    cout<<"Output"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Book Name: "<<b[i].bookName<<endl;
        cout<<"Author Name: "<<b[i].authorName<<endl;
        cout<<"Book Price: "<<b[i].price<<endl;
    }
    
    
    

    
    return 0;
}