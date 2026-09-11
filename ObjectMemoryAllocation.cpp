//object memory allocation

#include<iostream>

using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter; //keep increasing

    public:
        void initCounter(void){counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void){
    cout<<"Enter Id of your item no "<<counter+1<<": "<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<" Rs"<<endl;
    }
    
}
int main(){
    // the things which are common for all objects are stored in one place (only one time)
    // different get different memory 
    // member functions are common to all objects so given memory at once only

    // object creations
    Shop dukan;
    dukan.initCounter();
   /*  dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice(); */

    for (int i = 0; i < 10; i++)
    {
        dukan.setPrice();
    }
    
    dukan.displayPrice();
    return 0;
}