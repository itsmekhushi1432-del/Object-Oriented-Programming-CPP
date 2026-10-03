/*Binary Files--> unreadable for humans
Advantages over text files:-
1. Fast retrieval of data
2. Smaller file size
3. Can store complete objects

Functions in binary files:-
1. write = to write
2. read = to read
Binary file requires a character pointer."
Say:
"write() and read() require a character pointer (char*)." 

n modern C++, you'll often see:
reinterpret_cast<char*>(&cgpa)

instead of

(char*)&cgpa*/

/*Write a program to:

Include the required header files.
Create an int age = 19.
Open a file named age.dat in binary output mode.
Store the integer in the binary file using write().
Close the file.*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    int age = 19;
    fstream file("age.dat",ios::out | ios::binary);

    file.write((char*)&age,sizeof(age));
    file.close();

    age = 0;//resetting value to check if file read correctly or not
    file.open("age.dat",ios::in | ios::binary);
    file.read((char*)&age,sizeof(age));
    cout<<age;
    file.close();
    
    return 0;
}