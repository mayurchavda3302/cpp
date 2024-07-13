#include <iostream>
using namespace std;
// this is the exmaple of template with multipleparametars
/*
template<class t1,classt2>
class nameofclass
{
 // code / body
};
*/
template <class T1, class T2>
class mayur
{
public:
    T1 data1;
    T2 data2;
    mayur(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void Display()
    {
        cout << data1 << endl
             << data2 << endl;
    }
};
int main()
{
    mayur<int, char> obj1(1, 'c');
    // if we make tempalte than we need to specifies  after the class name
    //     inside the <>. And give the datatype
    obj1.Display();
    cout << endl;
    mayur<char, float> obj2('h', 23.32);
    obj2.Display();
}