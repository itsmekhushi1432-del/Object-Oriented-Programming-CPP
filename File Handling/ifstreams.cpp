/*>> Operator
------------
Reads only one word.
Stops at:
• Space
• Tab
• Newline

getline(file, variable)
-----------------------
Reads the complete line,
including spaces,
until a newline is encountered.*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    ifstream file;
    file.open("student.txt");

    string name;
    file>>name;

    string wish;
    file>>wish;//read single word
    //getline(file,wish); --> read a complete line

    cout<<name;
    cout<<wish;

    file.close();
    return 0;
}