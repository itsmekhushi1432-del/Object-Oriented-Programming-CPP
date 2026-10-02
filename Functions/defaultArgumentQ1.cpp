/*Write a function named multiply().

It should take two integers.
The second integer should have a default value of 2.
Print the multiplication.*/

/*#include<iostream>

using namespace std;

void multiply(int a,int b=2){
    
    cout<<a*b<<endl;
}

int main(){
    //only passing a value
    multiply(5);

    //passing a and b both values
    multiply(5,4);
    return 0;
}*/

/*Create a function:
calculateBill()
Parameters:
Item Price
Quantity (default = 1)
Print the total bill.
Example:
calculateBill(200);
Output
Total Bill = 200
Example:
calculateBill(200,5);
Output
Total Bill = 1000*/

#include<iostream>

using namespace std;

void calculateBill(double price,int quantity = 1){
    cout<<"Total Bill: "<<price*quantity<<endl;

}
int main(){
    
    calculateBill(200);
    calculateBill(200,5);
    return 0;
}