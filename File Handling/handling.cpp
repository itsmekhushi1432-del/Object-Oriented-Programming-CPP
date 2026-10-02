/*File Handling is the process of storing and retrieving data from a file so that the data remains available 
even after the program terminates.

Text File--->A text file stores data in the form of readable characters. Humans can easily read and edit it using 
editors like Notepad or VS Code.
Binary File---->A binary file stores data in binary format (0s and 1s). It is not human-readable and is mainly 
used for faster storage and retrieval of data.
These are faster -->
Because the data is stored in the same format as it exists in memory, so the computer does not need to convert 
it.*/

#include<iostream>
#include<fstream> //library for file handling

/*inside fstream three main objects
ofstream -> to write into files
ifstream -> to read from file
fstream -> for both reading and writing*/

using namespace std;

int main(){
    
    ofstream file; //object of class ofstream

    file.open("student.txt");//Opening a file named student or creating one if not exists."
    
    file<<"Name: Khushi"<<endl;
    file<<"CGPA: 8.33"<<endl;
    file<<"University: LPU";
    
    file.close(); //done writing save everything and release the files

    return 0;
}