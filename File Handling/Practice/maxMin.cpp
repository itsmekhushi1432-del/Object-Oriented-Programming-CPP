/*Write a C++ program that:

Takes an integer n from the user.
Takes n integers as input.
Finds the maximum and minimum number.
Stores both values in a file named result.txt using ofstream.
Closes the file.
Reopens the same file using ifstream.
Reads the contents of the file and displays them on the screen.*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //input value
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //ofstream file
    ofstream file("result.txt");
    int max = arr[0];
    int min = arr[0];

    //find max/min value 
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    file<<"Max: "<<max<<endl;
    file<<"Min: "<<min<<endl;

    //closing file
    file.close();

    //opening file in read mode
    ifstream file2("result.txt");
    
    string line;
    while (getline(file2,line))
    {
        cout<<line<<" ";
        cout<<endl;
    }
    

    //closing file
    file2.close();
    
    return 0;
}