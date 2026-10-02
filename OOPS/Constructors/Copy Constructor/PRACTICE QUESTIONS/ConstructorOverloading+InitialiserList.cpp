/*Create a class Mobile.

Data Members

string brand;
int price;

Requirements
Default Constructor
Brand = Unknown
Price = 0
Parameterized Constructor using Initializer List
Display Function

In main()
Mobile m1;
Mobile m2("Samsung",45000);

m1.display();
m2.display();*/

#include<iostream>

using namespace std;

class Mobile{

    public:
        string brand;
        int price;

        //default constructor
        Mobile(){
            brand = "Unknown";
            price = 0;
        }

        //parameterized constructor using initializer list
        Mobile(string b,int p):brand(b),price(p){

        }

        //display function
        void display(){
            cout<<"Brand: "<<brand<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<endl;
        }

};

int main(){
    
    Mobile m1;//will call default constructor
    Mobile m2("Samsung",45000);

    m1.display();
    m2.display();
    return 0;
}