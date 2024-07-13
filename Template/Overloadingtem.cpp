#include <iostream>
/*
this is the example of overloadingtemplate
the function using template is called templatised function
*/
using namespace std;
template <class T>
/*
here is the template wii use for reusiblity of our code.

here we  make one template 
*/
class mayur
{
public:
    T data;
    /*
    here we make template.
    in side the template we make class called T.
    now we  can use the T as a data type.

    main addvanytage of c++  is that tamplet
    */
    mayur(T a)
    {
        data = a;
    }
    void Display();
};
template <class T>
void mayur<T>::Display()
{
    cout << data;
}

void func(int a)
{
    cout << "I am the first fun()" << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am Templatised func()" << a << endl;
}
template <class T>
void func1(T a)
{
    cout << " I am TEMPlAdsc functio1" << a << endl;
}
int main()
{
    /*
    mayur<int> mya(34);
    mya.Display();
    cout << endl;
    mayur<float> mya2(32.21);
    mya2.Display();
    */
    func(4);
    func1(4);
    return 0;
}