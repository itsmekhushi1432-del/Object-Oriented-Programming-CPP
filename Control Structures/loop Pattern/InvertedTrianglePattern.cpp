#include<iostream>

using namespace std;

int main(){
    /* Inverted triangle pattern
    1111
     222
      33  logic = number of space = value of i{ i=0,s=0,i=1,s=1 etc..} first loop till i inner loop1 = space
       4  and run till i as number os space = i value second inner loop to print number so its i+1 for eg i=0{i+1=0+1=1}* and will run till n-i*/
       int n;
       cout<<"enter n:";
       cin>>n;
       for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<n-i;j++){
                cout<<i+1;
            }
            cout<<endl;
       }
        int n2;
       cout<<"enter n2:";
       cin>>n2;
       char ch='A';
       for(int i=0;i<n2;i++){    //for inverted pyramid version add space between
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<n2-i;j++){  /* putting ch+1 = will give ascii value as c++ compiler will perform arithmetic operation and integer conversion*/
                cout<<char('A'+i)<<" ";
            }
            cout<<endl;
       }

       return 0;
}