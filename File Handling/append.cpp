/*Creates a file named student3.txt.

Writes:

Name: Khushi
Closes the file.
Reopens it in append mode (ios::app).

Adds:

CGPA: 8.33
University: LPU
Closes the file.
Opens it in read mode and prints the entire file using only:
while(getline(file, line))*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){

    //in out mode
    fstream my_file("student3.txt",ios::out);
    my_file<<"Name: Khushi"<<endl;
    my_file.close();

    //in append mode
    my_file.open("student3.txt",ios::app);
    my_file<<"CGPA: 8.33"<<endl<<"University: LPU"<<endl;
    my_file.close();

    //in read mode
    my_file.open("student3.txt",ios::in);
    string line;
    while (getline(my_file,line))
    {
        cout<<line<<" ";
        cout<<endl;
    }

    my_file.close();
    
    return 0;
}