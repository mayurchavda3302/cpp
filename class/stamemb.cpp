#include <iostream>
using namespace std;
class worker
{
    int id;
    static int count;
    /*if we not make count static than we need to give
     count=0
    */

public:
    void setdata(void)
    {
        cout << "enter the id :";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of worker is:" << id << " and this is worker number is " << count << endl;
    }
};
int worker::count; // Defalut value is 0

int main()
{
    worker w1, w2;
    // here w1 is object

    w1.setdata();
    w1.getdata();


    w2.setdata();
    w2.getdata();
    /*
        static int num;
        cout<<num;
        here is value of num is 0 because it is static variable
        so it wii not store any garbge value

        defalut vlaue is 0
    */
    return 0;

    //  tutorial number -  24   code with harry
}