#include<iostream>

using namespace std;
enum Meal{
    breakfast,
    lunch,
    dinner
};

int main(){
    //enum-----> user defined dataypes that let us give names to integer constant
    Meal m = lunch;
    cout<<m;
    return 0;
}