/*Write a C++ program that:
Uses ofstream to store the numbers 1 to 10 in a file named number.txt.
Closes the file.
Opens the same file using ifstream.
Reads every number from the file.
Prints only the odd numbers on the screen.
Expected Output
1 3 5 7 9*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //ofstream file
    ofstream my_file("number.txt");

    //storing value in file
    for (int i = 1; i <= 10; i++)
    {
        my_file<<i<<" ";
    }

    //closing file
    my_file.close();

    //in ifstream mode
    ifstream file("number.txt");
    int num;

    //accessing value
    while(file>>num){
        if(num % 2 != 0){
            cout<<num<<" ";
        }
    }

    file.close();

    return 0;
}