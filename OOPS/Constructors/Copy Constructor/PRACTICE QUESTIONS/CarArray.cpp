/*Create a class Car with:

Default Constructor
Parameterized Constructor
Copy Constructor
Destructor
Initializer List

Then create an array of objects.

Car cars[3]={
    Car(1,"BMW"),
    Car(2,"Audi"),
    Car(3,"Tesla")
};

Display all.*/

#include<iostream>

using namespace std;

class Car{

    public:
        int car_id;
        string company;

        //default constructor
        Car(){
            car_id = 0;
            company = "Unknown";
        }

        //parameterised constructor initialized list
        Car(int id,string cmp):car_id(id),company(cmp){

        }

        //copy constructor
        Car(const Car &obj){
            car_id = obj.car_id;
            company = obj.company;
        }

        //destructor
        ~Car(){
            cout<<"Destructor called"<<endl;
        }

        //display
        void display(){
            cout<<"Car ID: "<<car_id<<endl;
            cout<<"Company: "<<company<<endl;
            cout<<endl;
        }

};

int main(){
    
    //array of objects
    Car cars[4] = {
        Car(),
        Car(2,"BMW"),
        Car(3,"Audi"),
        Car(4,"Tesla"),
    };

    for (int i = 0; i < 4; i++)
    {
        cars[i].display();
    }
    

    
    return 0;
}