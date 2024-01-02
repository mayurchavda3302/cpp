#include <iostream>
using namespace std;
/*
this program is about copy constructor ......

when no copy  constructor is found, compiler supplies its own copy constructor
*/

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout << "copy constructor called " << endl;
        a = obj.a;
    }
    void Display();
};
void Number ::Display()
{
    cout << "the number for this object is " << a << endl;
}

int main()
{
    Number x, y, z(13), z2;
    Number z1(x);
    x.Display();
    z1.Display(); // copy constructor invoked
                  //  z.Display();

    z2 = z; // copy contstrctor not called
    z2.Display();
    Number z3 = z; // copy contructor called

    return 0;
}