#include<iostream>

using namespace std;

typedef struct employee{
    int eId;//4
    char favChar;//1
    float salary;//4  total----->9 bytes
} ep;
    
int main(){
    //structures---->user defined datatype to store differnet types of value(datatypes)
    ep Khus;
    Khus.eId=12529497;
    Khus.favChar='P';
    Khus.salary=150000.87;

    cout<<"The value of e.Id is "<<Khus.eId<<endl;
    cout<<"The value of favChar is "<<Khus.favChar<<endl;
    cout<<"The value of salary is "<<Khus.salary<<endl;
  
    return 0;
}