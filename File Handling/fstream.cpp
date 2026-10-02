/*fstream can perform both reading and writing.

Since it can perform multiple operations, we specify a file mode
to tell the compiler how the file should be opened.

Examples:
ios::in   → Read
ios::out  → Write
ios::app  → Append (add data at the end)

ios::in
--------
Open file for reading.

ios::out
---------
Open file for writing.
Existing data is generally replaced.

ios::app
---------
Append mode.
New data is added at the end of the file.
Existing data remains unchanged.

ios::trunc
Truncate means:
Erase all existing data from the file before writing new data.

ios::binary?
"Open this file in binary mode."

Create an fstream object.
Open a file named student2.txt in output mode.
Write:
Name: Khushi
Age: 19
Close the file.*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){

    fstream file("student2.txt",ios::out);

    file<<"Name: Khushi"<<endl;
    file<<"Age: 19"<<endl;

    file.close();

    //in read mode
    file.open("student2.txt",ios::in);

    //string name;
    //getline(file,name);

    //string age;
    //getline(file,age);

    string line;
    while (getline(file,line))
    {
        cout<<line<<endl;
    }
    

    //cout<<name<<endl<<age<<endl;

    file.close();


    return 0;
}