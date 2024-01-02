#include <iostream>
using namespace std;
/*
this is the exmaple of pointer to derived class

*/
class Baseclass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class vriable var_base :" << var_base << endl;
    }
};
class Derivedclass : public Baseclass // here we inherited the Derived class😁 from the base class
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying  base class variable var_base :" << var_base << endl;
        cout << "Displaying derived  class vriable var_deriveds :" << var_derived << endl;
    }
};
int main()
{
    Baseclass *base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    /*
    - if we make poiter of base class to point the derived class.
     -in this case the members of base class was accese by the pointer of base class
     -but it wii does not accese the members of derived class but it wii point the derived class
     onject. it show an a error.
    - so we can not accese the member of  derived class with the pointer of base  class
    *************************************************

   - if we make the poiner of derived class and it wii point the derived class's object.
   - here, the pointer of derived class wii access the all members of base class becuse the
   derived class was inherited by the base class.
    */
    base_class_pointer = &obj_derived;
    // here we point base class to derived class's object
    base_class_pointer->var_base = 34;
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    cout << endl
         << endl;
    //  here we make pointer of our derived class

    Derivedclass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 97;
    derived_class_pointer->display();

    return 0;
}