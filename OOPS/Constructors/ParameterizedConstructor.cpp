/*Create a class Mobile with:

company
model
price

Use a parameterized constructor.

Create three mobiles:

Samsung S24 70000
Apple iPhone 16 90000
OnePlus 13 60000

Print all details.*/

#include<iostream>

using namespace std;

class Mobile{
    public:
    //attributes
    string company;
    int model;
    double price;
    
    //Parameterized Constructor ---> A constructor that accepts arguments to initialize an object with user-defined values
    Mobile(string c, int m , double p){
        company = c;
        model = m;
        price = p;
    }

    void display(){
        cout<<"Company : "<<company<<endl;
        cout<<"Model : "<<model<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<endl;

    }
    
};

int main(){

    Mobile m1("Samsung", 24, 70000);
    Mobile m2("Apple", 16 , 90000);;
    Mobile m3("OnePlus", 13, 60000);

    m1.display();
    m2.display();
    m3.display();

    
    return 0;
}