#include <iostream>
/*
 Example of Ambiguity Resolution
 */
using namespace std;
class Base1
{
public:
    void Greet()
    {
        cout << "hello how are you ?";
    }
};
class Base2
{
public:
    void Greet()
    {
        cout << "hello mr mayur chavda";
    }
};
class Drived : public Base1, public Base2
{
public:
    void Greet()
    {
        Base1 ::Greet;
        /*
        here we make resolution for Greet function because it is member of class Base1 and Base class 2
        so wi wii give make it.

        if we does not make resolution than it wii be does not work  it wii be
        becume a  error.

        after we  make resolution the function wii just take as we set it.

        */
    }
};
int main()
{
    Drived d;
    d.Greet();
    /*
       in this example we make to base class named class1 and class2
       we make class Derived from  Base class 1 and base class 2
       now,here is function GREET wii member of base class 1 and 2 so it wii not
       able to choose that which function is called .
       so , wi make resolution for any class as per our need
       if we does not make resolution it wii be show an a error

    */
    return 0;
}
