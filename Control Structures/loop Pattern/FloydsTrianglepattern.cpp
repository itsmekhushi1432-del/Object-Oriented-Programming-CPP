#include<iostream>

using namespace std;

int main(){
    /* Pattern
    1
    23
    456
    78910*/
    int n=4;
    int num=1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)//we can print this logic using backward loop also both give same result
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    /* pattern
        A
        BC
        DEF
        GHIJ
        */
    int n2=5;
    char ch = 'A';

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    

    return 0;
}