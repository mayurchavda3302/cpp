#include<iostream>
using namespace std;
/* 
Hiararachical Inheritance means we make two or more Derived class from only one base class
 */
class Base
{
protected:
int base1;
public :
void Set_number(int a)
{
 base1=a;
}
void Get_number(void) 
{
 cout<<"the nuber is "<<base1;
}
};

class Derived1 :public Base
{
  protected :
  int base2;
  public :
  void set_base2(int b)
  { 
    base2=b;
  }
  void Display(void)
  { 
     Set_number(12);
     Get_number();
      
  }
};
int main()
{
 Derived1 HY;
 HY.Display();

 return 0;
}