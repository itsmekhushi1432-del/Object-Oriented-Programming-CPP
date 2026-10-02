#include<iostream>

using namespace std;

int main(){
    //array and pointer 
    int marks[5];

    for(int i=0;i<5;i++){
        cin>>marks[i];
    }

    for(int i=0;i<5;i++){
        cout<<"The marks at"<<" "<<i<<" "<< "is marks:"<<marks[i]<<endl;
    } 
//pointer arithmetic ------> Address(new)=Address(current)+i*sizeof(datatype)
    cout<<"using pointer"<<endl;
    int *p=marks;
    for(int i=0;i<5;i++){
        cout<<"The marks at"<<" "<<i<<" "<< "is marks:"<<(*(p+i))<<endl;
    } 
    return 0;
}