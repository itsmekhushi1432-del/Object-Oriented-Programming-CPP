/*Electricity using pointer to object*/
#include<iostream>
using namespace std;

class Electricity
{
public:
    int units;
    int bill;
};

int Electricity :: *billPtr = &Electricity ::bill;
int main(){

    Electricity e;
    cin>>e.units;

    e.*billPtr = e.units*8;
    cout << e.*billPtr << endl;
    return 0;
}