#include<iostream>
using namespace std;
// here we make program about the constructors 

// comstructors a special number function with same name as of the class
// it is  used to initializ the objects of  its class

class Complex
{
  int a;
  int b;
  public :
       // creating a constructor 
   Complex(void);// here complex(void) is a constructors 

 /* we can  also  write code like this
   {
    a=10;
    b=1;
   }
 */
   void PrintNumber()
  {
    cout << "your number is " << a << " + " << b << endl;
  }
};
Complex :: Complex(void) // this is default constructor  as it is takes no parameaters
{
  a=10;
  b=1;
}
  
int main()
{
     Complex c1;
     c1.PrintNumber();


    return 0;
}

/*
 characteristics of constructors

1-  it should be declare in the pubilc section of the class
2-  they are automatically  invoke whenever the object is created 
3-   do not have return types
4- if can have default arguments 
5- we can not refer to their address
6- has same name of the class so it wii access automatically when the object of calss is called

*/