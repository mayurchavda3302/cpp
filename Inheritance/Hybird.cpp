#include <iostream>
/*
Hybried inheritance means we make three or more class but firse we make one derived
class from one base class after we make one onther devied class from  first devied claa

like we make  A class as a BASE class after we make B class inhreited from A,
we make  class C as BASE class .
we make also onter D class from  class B and C so here, our D classs is hybried class
*/
using namespace std;

class Base1
{
protected:
  int Base1;

public:
  void Set_base(int a)
  {
    Base1 = a;
  }
  void Get_base1()
  {
    cout << "the number of BASE -1 is " << Base1 << endl;
  }
};
class Derived : public Base1
{
};
class Base2
{
};
class Derived2 : public Base1, public Base2
{
};
int main()
{
}