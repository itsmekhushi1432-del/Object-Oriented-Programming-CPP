/*Reading the Entire File (EOF)
what if student.txt contains:

Khushi
19
LPU
AI
ML
C++
Python

To read everything we use loop
while(file >> data)
{
    cout << data << endl;
}*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    ofstream file;

    file.open("numbers.txt");
    /*file<<"10"<<" ";
    file<<"20"<<" ";
    file<<"30"<<" ";
    file<<"40"<<" ";
    file<<"50"<<" ";
    file<<"60"<<" ";*/
    for (int i = 10; i <= 60; i+=10)
    {
        file<<i<<" ";
    }
    
    
    file.close();

    ifstream files;
    files.open("numbers.txt");
    int numbers;

    while (files>>numbers)
    {
        cout<<numbers*2<<" ";
    }

    files.close();
    
    return 0;
}