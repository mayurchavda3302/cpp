#include <iostream>
/*
this is the example of the function hiding here we hide the function the childe class

*/
using namespace std;
class machine
{   
public:
    void show_state()
    {
        cout << "machine is on" << endl;
    }
};
class computer : public machine
{

public:
    void show_state()
    {
        cout << "computer is on" << endl;
    }
};

int main()
{
// here we make the pointer of the parent class and make object  of the chiled

    machine *c = new computer();
    c->show_state();
}