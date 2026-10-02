/*Write a C++ program to:

Include the required header file.
Create an ofstream object named myFile.
Open a file named college.txt.
Write the following into the file:
Name: Khushi
Course: B.Tech AI & ML
Close the file.*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    ofstream myFile;

    myFile.open("college.txt");

    //ofstream myFiles("college.txt") shorter way both create and open the file

    myFile<<"Name: Khushi"<<endl;
    myFile<<"Course: B.Tech AI & ML"<<endl;

    myFile.close();
    return 0;
}