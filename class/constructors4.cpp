#include <iostream>
using namespace std;
/*
  Here is make constructors with default arguments 
*/
class simpal
{
    int Data1;
    int Data2;
    int Data3;

public:
    simpal(int a, int b = 10, int c = 12)
    /*
    here is 9 is default value of b if we does not give value to b it wii be
     by defalut 9
     */
    {
        Data1 = a;
        Data2 = b;
        Data3 = c;
    }
    void PrintData();
};

void simpal ::PrintData()
{
    cout << "the value of Data1, Data2 and Data3 is : " << Data1 << " ,  " << Data2 << "  and  " << Data3 << endl;
}
int main()
{
    simpal s1(12);
    s1.PrintData();

    return 0;
}