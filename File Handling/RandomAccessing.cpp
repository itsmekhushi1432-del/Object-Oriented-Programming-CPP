/*Random Access means accessing any required position in a file directly without reading all the
previous data.

Functions in file handling

Reading mode only
g -> get = read
tellg()----->Tell the current position of the reading pointer.
seekg()-----> is used to move the reading pointer (get pointer) to a specified position in a 
file.

Writing mode
p -> put = write
tellp()---->Tells the current position of the writing pointer.
seekp() is used to move the writing pointer (put pointer) to a specified position in a file.

Modes under seekg and seekp
Mode	Meaning
ios::beg	Beginning of the file
ios::cur	Current pointer position
ios::end	End of the file

*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("student4.txt", ios::in | ios::out);

    if (!file)
    {
        cout << "File not found!";
        return 0;
    }

    string line;

    cout << "================ INITIAL POINTERS ================\n";
    cout << "tellg() = " << file.tellg() << endl;
    cout << "tellp() = " << file.tellp() << endl;

    //==========================================================
    cout << "\n1. seekg(0, ios::beg)\n";

    file.seekg(0, ios::beg);

    cout << "tellg() = " << file.tellg() << endl;

    getline(file, line);

    cout << "Data Read : " << line << endl;

    //==========================================================
    cout << "\n2. seekg(5, ios::cur)\n";

    file.seekg(5, ios::cur);

    cout << "tellg() = " << file.tellg() << endl;

    getline(file, line);

    cout << "Data Read : " << line << endl;

    //==========================================================
    cout << "\n3. seekg(-5, ios::end)\n";

    file.seekg(-5, ios::end);

    cout << "tellg() = " << file.tellg() << endl;

    getline(file, line);

    cout << "Data Read : " << line << endl;

    //==========================================================
    cout << "\n4. seekp(0, ios::beg)\n";

    file.seekp(0, ios::beg);

    cout << "tellp() = " << file.tellp() << endl;

    //==========================================================
    cout << "\n5. seekp(5, ios::cur)\n";

    file.seekp(5, ios::cur);

    cout << "tellp() = " << file.tellp() << endl;

    //==========================================================
    cout << "\n6. seekp(-5, ios::end)\n";

    file.seekp(-5, ios::end);

    cout << "tellp() = " << file.tellp() << endl;

    file.close();

    return 0;
}