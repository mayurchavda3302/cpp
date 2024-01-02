#include <iostream>
using namespace std;

// this file is about friend function of class
class Z;
class Y
{
  int data;

public:
  void SetVlue(int value)
  {
    data = value;
  }
  friend void add(Y, Z);
};

class Z
{
  int num;

public:
  void SetVlue(int value)
  {
    num = value;
  }
  friend void add(Y, Z);
};

void add(Y o1, Z o2)
{
  cout << "summing  datas of x and y objects gives me" << o1.data + o2.num;
}


class complex
{
  int a;
  int b;

public:
  void SetNumber(int n1, int n2)
  {
    a = n1;
    b = n2;

    /*
      here a and b is a peivate variables so we can make a=n1 and b=n2
      here function SetNumber is a public function so we can access it
      at any where inside the main or any function
    */
  }
  /*
here SumComplex  function  is allowed to access private data of class
but the  friend function SumComplex is  non member.
friend function take objects  as arguments for access  private data of class
we can declare it inside public or private of the class
 */
  friend complex SumComplex(complex o1, complex o2);
  /*
  here we make friend function of complex class  which called Sumcomplex
  */
  void PrintNumber()
  {
    cout << "your number is " << a << " + " << b << " i " << endl;
  }
};
complex SumComplex(complex o1, complex o2)
/*
 witout make friend function we can not access it
 because all data of class is private
 so we wont to  make it friend function
*/

{
  complex o3;
  o3.SetNumber((o1.a + o2.a), (o1.b + o2.b));
  return o3;
}

int main()
{
  Y a1;
  a1.SetVlue(5);
  Z b1;
  b1.SetVlue(15);
  add(a1, b1);

 
 
 
 
 
  complex c1, c2, sum;
  // here is c1 and c2 is make object of class
  c1.SetNumber(12, 21);
  c1.PrintNumber();

  c2.SetNumber(23, 32);
  c2.PrintNumber();

  sum = SumComplex(c1, c2);
  sum.PrintNumber();
  return 0;
}

/*
 properties of friend  function ....

 1. not in scope of class
 2. since it is not in the scope of function of the class ,it cannot be called from
      the  object of that class.   EXA-- c1.SumComplex()  ==  INVALID
 3. can be invoked without the help of any function
 4. usually  contans the objects as arguments
 5. can be declared inside public or private section of the class
 6. it can not access the members directly by their names  and need object_name.member_name
   to access any member.
*/