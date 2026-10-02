#include<iostream>

using namespace std;

int main(){
    //----Loops in c++-----
    /*1. For Loop, 2. While Loop, 3. Do-while loop*/

    //------For Loop------->

    /*for(int i = 0;i < 5;i++){/* Syntax for(initialisation;condition;updation)*/
       // cout<<i<<endl;
    //}

    //-------While Loop------>
    /*Syntax 
    while(condition){
        statements;
    }*/
    /*int i = 0;
   while(i<5){
    cout<<i<<endl;
    i++;
   } */

   //--------Do-While Loop------>
   /*synatx
do{
    statements;
}while(condition)*/
/*int i=0;
do{
    cout<<i<<endl;
    i++;
}while(i<5);*/

//-------Program to print multipication table of 6------>
int i=1;
while(i<=10){
    cout<<6*i<<endl;
    i++;
}
    return 0;
}