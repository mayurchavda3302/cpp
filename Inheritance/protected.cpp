#include <iostream>
using namespace std;
/*
example of protected access modifier
*/
class Base
{
protected:
    int a;

private:
    int b;
};
/*
FOR A PROTECTED MEMBER:

members           public- derivation   private- derivation   proteced-derivation
  1.PRIVATE        Not Inherited         not Inherited         not Inherited
  2.PUBLIC            public             private                  protected
 3.PROTECTED          protected           private             protected


*/
class Derived : public Base
{

};
int main()
{
   Base b;
   Derived d;
   //cout<<d.a;

   return 0;

}