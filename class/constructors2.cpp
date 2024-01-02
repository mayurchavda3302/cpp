#include <iostream>
using namespace std;
/*
 there are two types of constructors

 1- parameterized  constructor
 2- defalut constructor

   here is  2 types of call to parameterized constructor
      1- Implicit call
      2- Explicit call
*/
class point
{
    int x;
    int y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void DisplayPoint()
    {
        cout << "the point is(" << x << " , " << y << ")" << endl;
    }
};
class complex
{
    int a;
    int b;

public:
    complex(int x, int y);
    void PrintNumber()
    {
        cout << "the number is : " << a << " + " << b << endl;
    }
};
complex ::complex(int x, int y) // this is   parameterized constructor  as it is takes parameaters
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    complex a1(4, 6);
    a1.PrintNumber();

    //     Explicit call
    complex b1 = complex(12, 21);
    b1.PrintNumber();
    cout << endl;

    cout << "here is start point class " << endl;
    cout << endl;
    /*
     create a function   which takes 2 point objects and computes the distance between
      those points
    */

    point p1(1, 1);
    p1.DisplayPoint();
    point q1(2, 7);
    q1.DisplayPoint();
    return 0;
}
// also we can call inbok to the run