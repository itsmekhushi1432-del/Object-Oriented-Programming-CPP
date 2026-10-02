#include<iostream>

using namespace std;

int main(){
    /* 1st pattern is the square pattern
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4*/
     int n=4;
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n;j++){   // for * just replace j with * in cout
           cout<<j<<" "; 
        }cout<<endl;
    } 

    // to print a b c d
    for(int i=1;i<=4;i++){
        char ch='A';
        for(int j=1;j<=4;j++){
            cout<<ch<<" ";
            ch += 1;
        }cout<<endl;
    }
    return 0;
}