/*An inline function is a function in which the compiler tries to replace the function call
with the actual function code, reducing function call overhead.

""Why do we use inline functions?
To reduce function call overhead and improve performance for small functions.""

""What is Function Call Overhead?
When a normal function is called, the program must:
Go to the function.
Execute it.
Return to the calling location.
This extra work is called function call overhead.""

When Should We Use Inline Functions?
✅ Small functions

When Should We NOT Use Inline Functions?
❌ Very large functions

Create an inline function:
square(int n;
Call it with:
square(6)
Print the result.*/

#include<iostream>

using namespace std;

inline int square(int n){
    return n*n;
}

int main(){
    //calling function
    cout<<square(6);

    return 0;
}