/*Default Copy Constructor / Compiler Generated Copy Constructor
When there is no need to write a constructor on our own compiler create one itself*/

#include <iostream>
using namespace std;

class Car
{
public:
    string company;
    string model;

    Car(string c, string m)
    {
        company = c;
        model = m;
    }

    void display()
    {
        cout << company << " " << model << endl;
    }
};

int main()
{
    Car c1("BMW", "X5");

    Car c2 = c1;   // Compiler Generated Copy Constructor

    c1.display();
    c2.display();
}