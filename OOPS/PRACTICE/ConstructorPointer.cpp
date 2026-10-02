#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    int area;

public:

    Rectangle(int l = 0, int b = 0)
    {
        length = l;
        breadth = b;
        area = length * breadth;
    }

    void display()
    {
        cout << area << endl;
    }
};

int main()
{
    Rectangle r[4];

    int length, breadth;

    for(int i = 0; i < 4; i++)
    {
        cin >> length >> breadth;

        r[i] = Rectangle(length, breadth);
    }

    Rectangle *ptr = r;

    for(int i = 0; i < 4; i++)
    {
        ptr->display();
        ptr++;
    }

    return 0;
}