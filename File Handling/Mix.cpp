/* 
Create an fstream object.
Open a file named student4.txt in output mode.

Write:

Name: Khushi
Age: 19
CGPA: 8.33
Close the file.
Reopen the same file in append mode.

Add:

Course: B.Tech AI & ML
Close the file.
Reopen the file in input mode.
Print the entire file using:
while(getline(file, line))
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    //in output mode
    fstream my_file("student4.txt",ios::out);

    my_file<<"Name: Khushi"<<endl<<"Age: 19"<<endl<<"CGPA: 8.33"<<endl;
    my_file.close();

    //in append mode
    my_file.open("student4.txt",ios::app);
    my_file<<"Course: B.Tech AI & ML"<<endl;
    my_file.close();

    //in reading mode
    my_file.open("student4.txt",ios::in);

    string line;

    while (getline(my_file,line))
    {
        cout<<line<<" ";
        cout<<endl;
    }
    
    my_file.close();
    return 0;
}