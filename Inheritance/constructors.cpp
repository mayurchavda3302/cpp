#include <iostream>
/*
this is the example of contrustor in Derived class
and how the contrustor of derived and base class wii be calling 
*/
/* 
SOME EXAMPLE OF HOW TO CONTRUSCTOR OF DERIVED AND BASE CLASS WAS CALLED
CASE 1:
       class b:public a
       {
        // order of execution of constructor  -> first a() then b()
       }

       class a:public b,public c
       {
        //  order of exuecution of constructor -> first b(),then c(),and a()
       }

       class  a: public b,virtual public c
       {
        //  order of exiecution of constructor -> first c(),then b(), and a()  
       }
*/
using namespace std;

class Base1
{
  int Roll_number;

public:
  Base1(int m)
  {
    Roll_number = m;
    cout<<"contstructors of base class 1 in called"<<endl;
  }
  void Print_Roll(void)
  {
    cout << "your roll number is :" << Roll_number<<endl;
  }
};
class Base2
{
  int marks;

public:
  Base2(int n)
  {
    marks = n;
     cout<<"contstructors of base class 2 in called"<<endl;
  }
  void marks1(void)
  {
    cout<<"your marks is"<<marks<<endl;
  }
};
class Derived : public Base1, public Base2
{
  int result;
  int score;

public:
  Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
  /*
  here is the value of a is gone in base class 1 as a roll number
  ans b is gone in base class 2 as a marks and c and d wii gone 
  in the vlaue of result and score 😀
  */
  /*
  if we can call virture class than it wii be accese/ call
  first there is no meter of position of calling the virtual class
  wii called first
  */
  {
    score=c;
    result=d;
    cout<<"Derived class constructor called"<<endl;
  }
  void Print_Result(void)
  {
    cout<<"the score is :"<<score<<endl;
    cout<<"your result is :"<<result<<endl;
  }
};
int main()
{
  Derived d(12,2,21,3);
  d.Print_Roll();
  d.marks1();
  d.Print_Result();
}