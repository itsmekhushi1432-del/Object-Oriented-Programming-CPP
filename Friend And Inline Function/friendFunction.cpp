/*A Friend Function is a normal function that is given permission to access the private and
protected members of a class.

Create a class Box.
Private member:
int length;
Constructor initializes:
length = 25
Create a friend function:
display(Box);
that prints the value of length.*/

#include<iostream>

using namespace std;

class Box{

    private:
        //data members
        int length;

    public:
        //member function
        Box(){
            length = 25;
        }

        //friend function {it a normal function not the member function}
        friend void display(Box);//only declaration

};

void display(Box b1){
    cout<<"Length : "<<b1.length<<endl;

}

int main(){
    Box b1;
    display(b1);

    return 0;
}