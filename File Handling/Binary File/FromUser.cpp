/*Write a program to:

1. Take 5 integers from the user.
2. Store all of them in a binary file named numbers.dat.
3. Close the file.
4. Reopen the file in binary read mode.
5. Read every number from the file.
6. Print:
   • All numbers
   • Sum of all numbers
   • Average of all numbers*/

   #include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 numbers: " << endl;

    // Taking input from the user
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Opening file in binary write mode
    fstream my_files("numbers.dat", ios::out | ios::binary);

    // Writing all numbers into the binary file
    for(int i = 0; i < 5; i++)
    {
        my_files.write((char*)&arr[i], sizeof(arr[i]));
    }

    my_files.close();

    // Opening the same file in binary read mode
    my_files.open("numbers.dat", ios::in | ios::binary);

    int num;
    int sum = 0;
    int count = 0;

    cout << "Numbers stored in file: ";

    // Reading numbers until End Of File (EOF)
    while(my_files.read((char*)&num, sizeof(num)))
    {
        cout << num << " ";

        // Calculating sum and counting numbers
        sum += num;
        count++;
    }

    my_files.close();

    // Calculating average
    float average = (float)sum / count;

    cout << endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}