#include <iostream>
/*
this is the example of
             :   this pointer
*/
//static members have no "this" type of pointer

// in c++ the local variable wii take more resoplible or also say that
using namespace std;
class Hello
{
    int a;

public:
    Hello& SetData(int a)
    {
        this->a = a;
         return *this;
        /*
        if we write  here    a=a  it  isan a error but it wii does not show
        the error it wii be just take  garbeg value.
        */
    }
    void GetData()
    {
        cout << "the value of  a is :" << a << endl;
    }
};
int main()
{
    // this is a keyword which is a pointer which points the object which
    // sinvokes the member function
    Hello h1;
     // here use the  REFERENCE VARIABLE  so we can write like this 
    h1.SetData(12).GetData();
    h1.GetData();
}