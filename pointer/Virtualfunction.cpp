#include <iostream>
using namespace std;
/*
this is the exmaple of virtualfunction
and this is also the run-time polymigition

*/
class Baseclass
{
public:
    int var_base=1;
    /*
    here we make our function virtual.
    if the pointer of base class wii point to the derived class then it the same name function
    of derived class was display not the function of base class 
    */
    virtual void display()
    {
        cout << "Displaying Base class vriable var_base :" << var_base << endl;
        cout<<endl<<endl;
    }
};
class Derivedclass : public Baseclass // here we inherited the Derived class😁 from the base class
{
public:
    int var_derived=2;
    void display()
    {
        cout << "Displaying  base class variable var_base :" << var_base << endl;
        cout << "Displaying derived  class vriable var_deriveds :" << var_derived << endl;
    }
};
int main()
{
  Baseclass* base_class_pointer;
  Baseclass obj_base;
  Derivedclass obj_derived;

  base_class_pointer=&obj_derived;
  base_class_pointer->display();
  return 0;
}