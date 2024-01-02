#include <iostream>
// example of singal inheritance
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void SetData();
    int GetData1();
    int GetData2();
};
void base::SetData()
{
    data1 = 15;
    data2 = 20;
}
int base ::GetData1()
{
    return data1;
}
int base ::GetData2()
{
    return data2;
}
class Derived : public base // class is being derived publically
{
    int data3;
    public:
    void Process();
    void display();
};
void Derived ::Process()
{
    data3 = data2 * GetData1();
}
void Derived::display()
{
    cout << "the value of 1 is : " << GetData1() << endl; // here is data 1 is private member so we can write like
    cout << "the value of 2 is : " << data2 << endl;
    cout << "the value of 3 is : " << data3 << endl;
}
int main()
{
    Derived dr1; // here we make object of Deriverd class
    dr1.SetData();
    dr1.Process();
    dr1.display();


    return 0;
}