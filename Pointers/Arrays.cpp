#include<iostream>

using namespace std;

int main(){
    /*Arrays----->collection of similar types of dataypes at a contiguous location
    ((contiguous location = for easy access))*/
int marks[5] = {78,87,98,75,86};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    marks[3]=80;///you can change the value of array
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    cout<<"Creating a Array using Loop"<<endl;

    for(int i=0;i<5;i++){
        cout<<marks[i]<<endl;
    }

    cout<<"Same using while loop"<<endl;
    int i=0;
    while(i<5){
      cout<<marks[i]<<endl;
      i++;
    }

    cout<<"Same using do while loop"<<endl;
    int j=0;
    do{
        cout<<marks[j]<<endl;
        j++;
    }while(j<5);
     
    cout<<"Program terminated.......";
    return 0;
}