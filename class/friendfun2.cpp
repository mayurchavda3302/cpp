#include <iostream>
using namespace std;
class c1;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);
    // if we can not  call function without  refrence so it does not swap the number 

public:
    void InData(int a)
    {
        val1 = a;
    }
    void Display(void)
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;

public:
    void InData(int a)
    {
        val2 = a;
    }
    void Display(void)
    {
        cout << val2 << endl;
    }
    friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x, c2 &y)
{
    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
/* trick to swap 2 number
temp = a;
a = b;
b = temp;
*/
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.InData(12);

    oc2.InData(34);

    exchange(oc1, oc2);
    cout << "the value of c1 after exchange  becomes: ";
    oc1.Display();
    // here 
    cout << "the value of c2 after exchange  becomes: ";
    oc2.Display();
    return 0;
}