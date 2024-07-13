#include <iostream>
using namespace std;
/*
this is the exaple of  function Template
*/
template <class T>
void swapp(T &g, T &h)
{
    T temp = g;
    g = h;
    h = temp;
}
template <class T1, class T2>
int average(T1 a, T2 b)
{
    int avg = (a + b) / 2;
    return avg;
}
int main()
{
    int a;
    a = average(10, 10);
    printf("the output is %d", a);
    cout << endl;
    int m,n;
    m=10;
    n=34;
    swapp(m,n);
    cout<<m<<endl<<n;
}