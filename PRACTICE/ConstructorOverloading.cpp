/*Create a class Laptop

Data Members
Brand
RAM
Price
Write three constructors.

Constructor 1
Default
HP
8 GB
50000

Constructor 2
Only Brand
Example
Laptop("Dell");
Price and RAM remain default.

Constructor 3
Brand, RAM, Price
Example
Laptop("Apple",16,150000);
Display all objects.*/

#include<iostream>

using namespace std;

class Laptop{
    public:
        string brand;
        int ram;
        double price;

        //constructor 1{default constructor}
        Laptop(){
            this->brand = "HP";
            this->ram = 6;
            this->price = 83000.50;
        }

        //Constructor 2
        Laptop(string brand){
            this->brand = brand;
            this->ram = 8;
            this->price = 50000;
        }

        //constructor 3
        Laptop(string brand,int ram,double price){
            this->brand = brand;
            this->ram = ram;
            this->price = price;
        }

        //display details
        void display(){
            cout<<"Brand: "<<brand<<endl;
            cout<<"RAM: "<<ram<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<endl;
        }

};

int main(){

    //object creation
    Laptop L1;
    Laptop L2("Dell");
    Laptop L3("Apple",16,150000);

    L1.display();
    L2.display();
    L3.display();

    return 0;
}