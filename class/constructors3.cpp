#include <iostream>
using namespace std;
/*
there is a example of consrtuctor overloding it means the function was called is depend on the
arguments  of calling function
*/
class complex
{
    int x;
    int y;

public:
    complex()
    {
        x = 0;
        y = 0;
    }
    complex(int a, int b)
    {
        x = a;
        y = b;
    }
    complex(int a)
    {
        x = a;
        y = 0;
    }
    void PrintNumber()
    {
        cout << "your number is :" << x << " + " << y << endl;
    }
};
int main()
{
    complex c1(12, 2);
    c1.PrintNumber();

    complex c2(12);
    c2.PrintNumber();
  
    return 0;
}