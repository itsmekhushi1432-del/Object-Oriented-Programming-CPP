/*Write a C++ program to:

Include the required header file.
Create an ofstream object named myFile.
Open a file named college.txt.
Write the following into the file:
Name: Khushi
Course: B.Tech AI & ML
Close the file.*/

/*File State Functions---->These functions tell us whether the file is working correctly.
1. good()
Returns true if everything is okay.
2. fail()
Returns true if an operation failed.
4. clear()

Suppose
while(file >> num)
{
}
Now EOF is reached.
If you try
file >> num;
Nothing happens because the file is still in the EOF state.
To use the file again:
file.clear();
Then move the pointer.
file.seekg(0);
Now you can read from the beginning again.
*/

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