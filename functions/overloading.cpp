//  function overloading
#include <iostream>
using namespace std;

void add(int a, int b)
{
    int ans = a + b;
    cout << "the answer is :" << ans<<endl;
}
void add(int a, int b, int c)
{
    int ans = a + b + c;
    cout << "the answer is :" << ans<<endl;
}
int main()
{
    int num1, num2, num3;
    cout << "Enter  num1 ";
    cin >> num1;
    cout << "Enter  num2 ";
    cin >> num2;
    cout << "Enter  num3 ";
    cin >> num3;
    add(num1,num2);
    add(num1,num2,num3);
    return 0;
}