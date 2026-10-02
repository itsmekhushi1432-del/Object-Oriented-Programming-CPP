/*String Modifiers --> String modifiers are functions that change the contents of a string.

For example, they can:
Add text
Remove text
Replace text
Insert text
Clear the string*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "Hello ";

    s.append("World "); //add one string at the end of the string
    s.insert(12,"Amazing");//Inserts text at a specified position.
    s.erase(5,6);//Removes characters from a string. Syntax -->stringName.erase(startPosition, numberOfCharacters);
    s.replace(5,6,"LPU");//Replaces a part of the string with new text. Syntax--->stringName.replace(startPosition, numberOfCharacters, "newText");
    cout << s;
    s.clear();//remove all characters from string
    cout<<s;
    s.push_back('k'); //Adds one character at the end.
    s.pop_back();//remove last character
    

    return 0;
}