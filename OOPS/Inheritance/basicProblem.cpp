/*Create a class Vehicle.
Function:
void start()
{
    cout << "Vehicle Started";
}

Create another class:
Car
that inherits from Vehicle.
In main():
Create a Car object.
Call start() using the Car object.*/

#include<iostream>

using namespace std;

class Vehicle{

    public:

        void start(){
            cout<<"Vehicle started."<<endl;
        }
};

//child class
class Car : public Vehicle{

};


int main(){

    //object creation of child class
    Car c1;
    c1.start();
    
    return 0;
}