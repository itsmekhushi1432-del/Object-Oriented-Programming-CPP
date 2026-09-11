/*Create an inline function:

maximum(int a, int b)
Return the larger number using:
Call the function twice:
maximum(10,20);
maximum(80,25);
Print both answers.*/

#include<iostream>

using namespace std;

inline int maximum(int a,int b){

    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    
    cout<<"Maximun : "<<maximum(10,20)<<endl;
    cout<<"Maximum : "<<maximum(80,25)<<endl;

    return 0;
}