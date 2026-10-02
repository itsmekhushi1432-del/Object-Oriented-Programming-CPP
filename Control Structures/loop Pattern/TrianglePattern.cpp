#include<iostream>

using namespace std;

int main(){
    /* Triangle pattern
    *
    **
    ***
    ****
    */
    int n;
    cout<<"Enter n : ";
    cin>>n;
    //int num=1;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){  //i+1 star printing logic also to remove blank line at starting that occur only when we keep j<i 
           /*  cout<<num<<" ";
            num++; */cout<<"*";
        }
        cout<<endl;
    }

    /* Pattern 2 
    1
    22
    333
    4444*/

    int n2;
    cout<<"Enter n2: ";
    cin>>n2;

    for(int i=0;i<n2;i++){
        for(int j=0;j<i+1;j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    /* Pattern 3
    A
    BB
    CCC
    DDDD
    EEEEE*/
    cout<<"Pattern Alphabets";
    int n3;
    cout<<"Enter n3:";
    cin>>n3;
    char ch = 'A';

    for(int i=0;i<n3;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch;

        }
        ch++;//updating ch inside loop will change variable after each iteration and chaging after a loop terminates keep value same
        
        cout<<endl;
    }
    
    return 0;
}