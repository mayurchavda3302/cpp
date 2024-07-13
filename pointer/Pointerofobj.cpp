#include <iostream>
/*
this is the example of pointer to obects and arrow operator
*/
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void GetData()
    {
        cout << "the real part is :" << real << endl;
        cout << "the imaginary part is :" << imaginary << endl;
    }
    void SetData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    Complex c1;
    Complex *ptr = &c1;

    (*ptr).SetData(12, 2);
    (*ptr).GetData();
    // here is ptr is point the object so we can write like that and the pointer
    //    was point the object of class so this wii be point  all the memebers of class
  
  // we can also make pointer of objects as below  and aecess it with the use of arrow operator
  //  the sing of arrow operator is   ->s
    Complex *pr = new Complex;
     pr->SetData(32,42);
     pr->GetData();

     // array of object
     Complex *p= new Complex[3];

     p->SetData(12,434);
     p->GetData();
    
    return 0;
}