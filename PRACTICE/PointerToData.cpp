/*Pointer to data member to convert hour and minutes into seconds*/

#include<iostream>

using namespace std;

class Time{
    public:
    int hour;
    int minute;
    int second;
};
int Time :: *secondsPtr = &Time :: second;

int main(){
    Time t;

    cin>>t.hour>>t.minute;

    t.*secondsPtr = (t.hour*3600)+(t.minute*60);
    cout<<"Seconds : ";
    cout<<t.*secondsPtr;
    return 0;
}