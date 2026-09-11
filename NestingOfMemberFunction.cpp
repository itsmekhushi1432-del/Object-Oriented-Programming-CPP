 // OOPs = Classes and objects

    // c++ -->initially called ----> c with classes by stroustroup
    // class --->extension of structures (in c)
    // structure had limitatons
    //   ----> members are public
    //   ----> no methods
    //  classes ---> structures+more
    // classes can have methods and properties
    //  classes --> can make few members as private & few as public
    //  structures in c++ are typedef
    // you can declare objects along with the class declaration

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0'&&s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }

}
void binary :: ones(void){
    chk_bin();//can run also without the need of objects
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='1'){
            s.at(i) ='0';
        }
        else{
            s.at(i)='1';
        }
    }
}
    
void binary :: display(void){
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
        
}

int main()
{
    // Nesting of member functions ---> A member function can directly call another member function of the same class.

    binary b;
    b.read();
    //b.chk_bin();
    b.ones();
    b.display();
    return 0;
}