#include <iostream>
/*
Destructor never takes an argument nor does  it return any value

*/
using namespace std;
int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "this time when constructor is called for object number " << count << endl;
    }
    // ~ sing is called
    ~Num()
    {
        cout << "this is time when my destructor is called for object number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside the main function" << endl;

    cout << "creating first objects" << endl;

    Num n1;
    {
        cout << "entering this block"<<endl;
        cout << "creating two or more objects" << endl;
        Num n2, n3,n4;
        {
            cout << "exiting  this block";
        }
    }
    cout<<"Back to main "<<endl;

    return 0;
}