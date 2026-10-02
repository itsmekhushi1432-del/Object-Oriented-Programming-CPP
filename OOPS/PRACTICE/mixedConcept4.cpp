/*Create a class ShoppingMall.
Store the following private data members:
customerId
purchaseAmount
finalBill
Create a static data member count.
Increment count automatically whenever an object is created.
Create a member function
setValue(int id, int amount);
Overload the function calculateBill():
calculateBill();                 // No Discount
calculateBill(int discount);     // With Discount
Do NOT create a display() member function.
Create a friend function
display(ShoppingMall);

to print

Customer ID
Final Bill
Create an array of 4 objects.
Take input as follows:
First 2 customers are regular.
Last 2 customers have a discount.*/

#include<iostream>

using namespace std;

class ShoppingMall{

    private:
        int customerId;
        int purchaseAmount;
        int finalBill;
        static int count;

    public:

        ShoppingMall(){
            count++;
        }

        void setValue(int id,int amount){
            this->customerId = id;
            this->purchaseAmount = amount;
        }

        void calculateBill(){

            finalBill = purchaseAmount;

        }

        void calculateBill(int discount){

            finalBill = purchaseAmount - discount;
        }

        friend void display(ShoppingMall s);

        static int Count(){
            return count;
        }

};

int ShoppingMall :: count = 0;

void display(ShoppingMall s){
    cout<<"Customer ID : "<<s.customerId<<endl;
    cout<<"Final Bill : "<<s.finalBill<<endl;
    cout<<endl;
}

int main(){
    
    ShoppingMall s[4];
    int id,amount,discount;

    for (int i = 0; i < 4; i++)
    {
        if(i<2){
            cin>>id>>amount;
            s[i].setValue(id,amount);
            s[i].calculateBill();
        }else{
            cin>>id>>amount>>discount;
            s[i].setValue(id,amount);
            s[i].calculateBill(discount);
        }
    }
    
    cout<<"Printing details: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        display(s[i]);
    }

    cout<<"Total Customers : "<<ShoppingMall::Count();
    
    return 0;
}