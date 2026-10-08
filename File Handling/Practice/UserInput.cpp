/*Write a C++ program using ofstream that:

Takes 5 integers as input from the user.
Stores only the even numbers in a file named even.txt.
Closes the file.
Prints the message:
Even numbers stored successfully.*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    int arr[5];
    
    //input value
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    //file in ofstream 
    ofstream file("even.txt");

    //even integer storing in file
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            file<<arr[i]<<" ";
        }
        
    }

    //closing the file
    file.close();

    cout<<"Even number stored successfully."<<endl;
    
    return 0;
}