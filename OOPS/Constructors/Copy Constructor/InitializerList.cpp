/*An Initializer List is a special syntax used to initialize data members directly when an object is created,
before the constructor body executes.

Syntax
ClassName(parameters)
    : variable1(value1), variable2(value2), variable3(value3)
{
    // Constructor Body
}
Working
Object Created
       ↓
name initialized with n
age initialized with a
       ↓
Constructor Body Executes

Members are initialized before entering the constructor body.

Why Do We Use Initializer List?
1. Direct Initialization
Data members are initialized while the object is being created.
2. More Efficient
Avoids unnecessary assignment after object creation.
3. Required for const Data Members {const variables cannot be assigned after they are initialized.}
4. Required for Reference Members {A reference must be initialized when it is declared. It cannot be made to refer to another variable later.}
5. Preferred for Member Objects {The Engine object is constructed directly instead of being constructed first and then assigned.}*/

#include<iostream>

using namespace std;

class Car{

    public:
        int modelId;
        string brand;

        //initialiser list
        Car(int m,string b):modelId(m),brand(b){

        }
        void display(){
            cout<<"Model Id: "<<modelId<<endl;
            cout<<"Brand: "<<brand<<endl;
            cout<<endl;
        }

};

int main(){
    
    Car c1(45,"Tesla");
    c1.display();

    return 0;
}