#include<iostream>
using namespace std;
/*
syntax for inheriting in multiple Inheritance
class Dervide : visibility_mode base1,visibility_mode base2
{
 class body of class "Derived "   
}
*/
class Base1
{
 protected:
   int base1int;
   public :
  void set_baseint1(int a)
  {
    base1int=a;
  }

};

class Base2
{
   protected:
   int base2int;
   public :
   void set_base2int(int a)
   {
    base2int=a;
   }
};
// we can also access  many base class for deriver(inheritance)  like as per our need

//
class Derived : public Base1,public Base2
{
public :
void show()
{
    cout<<"the value of base 1 is :"<<base1int<<endl;
    cout<<"the value of base 2 is :"<<base2int<<endl;
    cout<<"the sum of these values is :"<<base1int+base2int<<endl;
}
};
int main()
{
     Derived mayur;
     mayur.set_baseint1(10);
     mayur.set_base2int(122);
     mayur.show();

     return 0;
}