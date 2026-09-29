/*Create a class Locker with private data members:
customerId
rent
months
totalRent
Create a static data member count to count the total number of customers.
Increment count automatically whenever an object is created.
Create the following member functions:
setValue()
calculateRent()
Do NOT create a display() function.
Create a friend function named display() that prints:
Customer ID
Total Rent
Create an array of 4 Locker objects.
Display all records using the friend function only.
Finally display:
Total Rent = Locker Rent × Number of Months*/

#include<iostream>

using namespace std;

class Locker{
    private:
        int customerId;
        int rent;
        int months;
        int totalRent;
        static int count;

    public:
        Locker(){
            count++;
        }

        void setValue(int id,int rent,int months){
            this->customerId = id;
            this->rent = rent;
            this->months = months;

        }

        void calculateRent(){
            totalRent = rent*months;
        }

        friend void display(Locker l);

        static int Count(){
            return count;
        }


};

void display(Locker l){

    cout<<"Customer ID: "<<l.customerId<<endl;
    cout<<"Total Rent: "<<l.totalRent<<endl;
    cout<<"Number of Months: "<<l.months<<endl;
    cout<<endl;
}

int main(){
    
    Locker l[4];
    int id,rent,months;

    for (int i = 0; i < 4; i++)
    {
        cin>>id>>rent>>months;

        l[i].setValue(id,rent,months);
        l[i].calculateRent();
    }

    for (int i = 0; i < 4; i++)
    {
        display(l[i]);
    }
    
    cout<<"Total Customers: "<<Locker::Count()<<endl;
    return 0;
}