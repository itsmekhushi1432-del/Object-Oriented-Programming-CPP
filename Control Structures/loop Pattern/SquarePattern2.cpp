#include<iostream>

using namespace std;

int main(){
    /*Square code pattern 2
    1 2 3
    4 5 6  thing to notice row=3 also element in each row = 3 so its a program to print number in a square pattern
    7 8 9  but with the same number of element in each row as the number of rows present*/ 
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    int num=1; //we have declared num outside the loop if we declare it inside loop then its value will be reset to 1

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<num<<" ";   
            num++;
        }
        cout<<endl;
    }

    cout<<"Homework problem";
    /* (ii) A B C
            D E F
            G H I
    */
   int n2;
   cout<<"Enter value of n2: "<<endl;
   cin>>n2;

   char ch = 'A';
   cout<<"Before Pattern value of char ch = "<<ch<<endl;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
   }

    cout<<"After Pattern value of char ch = "<<ch;

    return 0;
}