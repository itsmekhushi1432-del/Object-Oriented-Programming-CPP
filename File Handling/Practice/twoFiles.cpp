/*Write a C++ program that:

Takes 10 integers as input.
Stores multiples of 2 in a file named multiple2.txt.
Stores multiples of 3 in another file named multiple3.txt.
If a number is divisible by both 2 and 3, it should be stored in both files.
Close both files.*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    //input value
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    
    //creating or opening both files
    ofstream file1("multiple2.txt");
    ofstream file2("multiple3.txt");

    //storing values in file
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            file1<<arr[i]<<" ";
        }
        if (arr[i] % 3 == 0)
        {
            file2<<arr[i]<<" ";
        }
    }
    
    file1.close();
    file2.close();

    return 0;
}