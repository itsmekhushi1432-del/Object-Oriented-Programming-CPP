#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    //-- selection control switch case statement
    switch (age)
    {
    case 18:
        /* code */
        cout<<"You are 18"<<endl;
        break;

    case 22:
        /* code */
        cout<<"You are 22"<<endl;
        break;

    case 2:
        /* code */
        cout<<"You are 2"<<endl;
        break;
    
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Program terminated"<<endl;
    return 0;
}