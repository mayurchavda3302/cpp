#include <iostream>
using namespace std;
// class is user define data type
/*


class is the blueprint of objets.

when the object wii create than only the memory of the class wii be occupied.



in side of class variable are know as a data members or  fields
class are accese by  access specifier

there are tree types of access specifier
1-private
2-public
3-protected

 the exiting class in also called as the  BASE CLASS
  the new class which is inherited is called as the  DERIVED CLASS

*/

class mayu
{
private:
  int d;

public:
  int j;
  void jd(int d1);
  void hy()
  {
    cout << "the value of d is" << d << endl;
    cout << "the value of j is " << j << endl;
  }
};
void mayu::jd(int d1)
{
  d = d1;
}
class ravi
{
private:
  int r, v;

public:
  int k, s;
  void info(int r1, int v1);
  void know()
  {
    cout << "the vaule of r is " << r << endl;
    cout << "the value of v is " << v << endl;
    cout << "the value of k is " << k << endl;
    cout << "the value of s  is" << s << endl;
  }
};
// here is the "::" is spoce reuolition  oprator 
void ravi::info(int r1, int v1)
{
  r = r1;
  v = v1;
}
class mayur
{
private:
  int f, g, h;

public:
  int i, j;
  void SETdata(int f1, int g1, int h1);
  void GETdata()
  {
    cout << "the vlaue of f is:" << f << endl;
    cout << "the vlaue of g is:" << g << endl;
    cout << "the vlaue of h is :" << h << endl;
    cout << "the vlaue of i is:" << i << endl;
    cout << "the vlaue of j is :" << j << endl;
  }
};
void mayur::SETdata(int f1, int g1, int h1)
{
  f = f1;
  g = g1;
  h = h1;
}
class student
{
private:
  // this private class wii just aceses by its members only
  int a, b, c;

public:
  int d, e;
  void setdata(int a1, int b1, int c1); // declartion of function
  void getdata()
  {
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
    cout << "the value of c is " << c << endl;
    cout << "the value of d is " << d << endl;
    cout << "the value of e is " << e << endl;
  }
};

void student::setdata(int a1, int b1, int c1)
{
  a = a1;
  b = b1;
  c = c1;
}
//  A class which is declared in another (enclosing) class is known as Nested class
class jay
{
public:
  class murlidhar
  {
  private:
    int y;

  public:
    int z;
    void hello(int y1);
    void hy()
    {
      cout << "the value of y is" << y << endl;
      cout << "the value of z is" << z << endl;
    }
  };
};
void jay::murlidhar::hello(int y1)
{
  y = y1;
}

int main()
{

  ravi r1;
  r1.k = 120;
  r1.s = 120;
  r1.info(150, 150);
  r1.know();

  mayu m4;
  m4.jd(99);
  m4.j = 99;

  m4.hy();

  jay::murlidhar jm;
  jm.hello(59);
  jm.z = 50;
  jm.hy();
}