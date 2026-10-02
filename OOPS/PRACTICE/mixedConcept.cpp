/*Smart Library Management System ---->

A library stores details of 4 books.

Each book has:
bookId
pages
totalWords

Requirements:
Create an array of objects.
Use a setValue() function.
Create another function calculateWords() that calculates
totalWords = pages × 250
Use a static member to count total books.
Display all books.
Finally print
Total Books = 4*/

#include<iostream>

using namespace std;

class Library{

    private:
    static int count;

    public:
    int bookId;
    int pages;
    int totalWords;

    Library(){ //constructor because whenever an object is created automatically called
        count++;
    }

    void setValue(int Id,int p,int t){
        bookId = Id;
        pages = p;
        totalWords = t;
    }

    void calculateWords(){
        totalWords = pages*250;
    }
    
    void display(){
        cout<<totalWords<<endl;
    }
    static int Count(){
        return count;
    }
};

int Library :: count = 0;

int main(){
    
    Library l[4];
    int id,page,word;

    for (int i = 0; i < 4; i++)
    {
        cin>>id>>page>>word;

        l[i].setValue(id,page,word);
        l[i].calculateWords();
    }

    cout<<"Total books: "<<Library::Count()<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"Total words of book "<<i+1<<": ";
        l[i].display();
    }
    
    
    return 0;
}