#include <iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch (int N)
        {
        cout<<"INNER CATCH\n";
        throw;
        }
    }
    catch(int x)
    {
        cout<<"OUTER CATCH\n";
    }
    return 0;
}