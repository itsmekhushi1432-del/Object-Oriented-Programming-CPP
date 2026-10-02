#include<iostream>

using namespace std;

int main(){
    /*reverse triangle
    1
    21
    321
    4321*/
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j >0; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
/* Pattern
A
BA
CBA
DBCA*/
    int n2;
    cout<<"Enter n2 : ";
    cin>>n2;
    

    for (int i = 0; i < n2; i++)
    {   char ch='A'+i;
        for (int j = i+1; j >0; j--)
        {
            cout<<ch;
            ch--;
        }
        cout<<endl;
        
    }

    return 0;
}