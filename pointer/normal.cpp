#include <iostream>
using namespace std;
/*
this is normal exmple of pointer
*/
int main()
{
    // basic example
    int a = 4;
    int *ptr = &a;
    cout << "the value of a is :s" << *(ptr) << endl;
    // this is noraml pointer
    int *py= new int(18);
    cout<<"the vlaue of py is"<<*(py)<<endl;
         //  use of new keyword 😁
    // int *p = new int(40);
    // we can also give another data type

    float *hy = new float(30.53);
    cout << "the vlaue of p is :" << *(hy) << endl;

    int *arr = new int[3];

    // delet and new is also  orerator and also keyword
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
   // delete[] arr;
   // delete oprator wii be delete the array
    cout << "the value of 0 " << arr[0] << "  the vlaue of 1 is  " << arr[1]
         << "   the value of 2 is " << arr[2] << endl;

    // delete operator

    return 0;
}