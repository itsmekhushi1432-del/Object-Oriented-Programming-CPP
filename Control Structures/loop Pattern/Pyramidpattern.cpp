#include<iostream>

using namespace std;

int main(){
    /*Pyramid pattern
           1     from the pattern basically its a combinaion of inverted triangle pattern and normal triangle pattern
         1 2 1
       1 2 3 2 1
     1 2 3 4 3 2 1*/
     int n;
     cout<<"Enter n:"<<endl;
     cin>>n;

     for(int i=0;i<n;i++){
        // spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        // number set 1
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }

        // number set 2
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
     }

    return 0;
}