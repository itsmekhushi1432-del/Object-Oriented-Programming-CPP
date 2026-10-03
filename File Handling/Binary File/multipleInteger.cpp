/*Write multiple integers.

Example:

10
20
30
40
50

Store them in a binary file.

Then read all of them back.*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){

    int nums;

    // Opening file in binary write mode
    fstream file("nums.dat", ios::out | ios::binary);

    // Writing numbers into binary file
    for(int i = 10; i <= 50; i += 10)
    {
        nums = i;
        file.write((char*)&nums, sizeof(nums));
    }

    file.close();

    // Opening the same file in binary read mode
    file.open("nums.dat", ios::in | ios::binary);

    // Reading all numbers until End Of File (EOF)
    while(file.read((char*)&nums, sizeof(nums)))
    {
        cout << nums << " ";
    }

    file.close();

    return 0;
}