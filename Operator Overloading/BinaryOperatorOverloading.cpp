/*Operator Overloading = Operator Overloading is the process of giving a new 
meaning to an existing operator so that it can work with user-defined objects.

syntax of operator overloading
return_type operatorOP()
{
    // code
}

Whenever the compiler sees
c1 + c2;

it automatically converts it into
c1.operator+(c2);

*/

/*Binary Operator Overloading*/
#include<iostream>

using namespace std;

class Complex{
    public:
        int real;
        int imag;

        void input(){
            cout<<"Enter real part: ";
            cin>>real;

            cout<<"Enter imaginary part: ";
            cin>>imag;
        }

        /*Whenever you overload any binary operator, ask yourself one question:
          "What should this operator return?"*/
        //operator overloading
        Complex operator+(Complex obj){
            Complex temp;
            /* we did not write c1.real or c1.imag because-->
            inside a member function, the calling object's members can be accessed directly.*/
            temp.real = real+obj.real;
            temp.imag = imag+obj.imag;

            return temp;
        }

        //display
        void display(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

};

int main(){
    Complex c1,c2,c3;

    c1.input();
    c2.input();

    c3 = c1+c2;
    cout<<"\nResult: ";
    c3.display();

    return 0;
}