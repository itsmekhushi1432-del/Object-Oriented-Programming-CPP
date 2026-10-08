/*Write a C++ program that:

Take a string from the user.
Store it in a file named text.txt using ofstream.
Close the file.
Open the same file using ifstream.
Read the string from the file.
Reverse the string without using any library function (reverse() is not allowed).
Print:
Original String
Reversed String
If both are the same, print:
Palindrome

Otherwise print:

Not Palindrome*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    //input from the user
    string name;
    getline(cin,name);

    //storing in file
    ofstream file("text.txt");
    file<<name;
    file.close();

    //opening file in read mode
    ifstream file2("text.txt");

    //read line/string from file
    getline(file2,name);

    //closing file
    file2.close();

    //reversing string begins here
    string rev = "";

    for (int i = name.length()-1; i >= 0; i--)
    {
        rev = rev+name[i];
    }
    //printing both original string and reversed string
     
    cout<<"Original String: "<<name<<endl;
    cout<<"Reversed String: "<<rev<<endl;

    if(name == rev){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}
/*using library function
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string name;

    getline(cin, name);

    string original = name;

    //name.begin = first character of the string 
    //name.end = one position after the last character
    
    reverse(name.begin(), name.end());

    cout << "Original String : " << original << endl;
    cout << "Reversed String : " << name << endl;

    if(original == name)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}*/