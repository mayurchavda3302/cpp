#include <iostream>
using namespace std;
/*
this is exmaple of LIST IN CONTRUCTORS

syntax for initialization list in constructor :
contructor (argument- list): initilization -section
{
    assignment+ other code;
}
example:
class test{
 int a;
 int b;
 public :
 test(int j,int i): a(i),b(j)
};
*/
class Hello
{
    int a;
    int b;

public:
    //  Hello(int i,int j):a(i),b(j)     // we can also write as a
    //  Hello(int i,int j):a(i),b(j+i)
    //    Hello(int i, int j) : a(i), b(2 * j)
    Hello(int i, int j) : a(i), b(a + j)
    /*
    here if we can write b first than a wii be take garbeg value 
     and b wii be work as we write 
    */
    {
        cout << "constructor executed" << endl;
        cout << "the vlaue of a is: " << a << endl;
        cout << "the value of b is : " << b << endl;
    }
};

int main()
{
    Hello h1(4, 10);
}