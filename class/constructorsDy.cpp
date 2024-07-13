#include <iostream>
/*
 Here we make example of Dynamic initialization of object useing  constructors
*/
using namespace std;
class BankDeposite
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposite() {} // here we make 3 constructors
    BankDeposite(int p, int y, float r);
    BankDeposite(int p, int y, int r);
    void Show();
};
BankDeposite ::BankDeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}
BankDeposite ::BankDeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void BankDeposite ::Show()
{
    cout << endl
         << "principal amount was  " << principal
         << "  return value after  " << years
         << "  years  is  " << returnValue << endl;
}
int main()
{
    BankDeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p ,y and  r  " << endl;
    cin >> p >> y >> r;

    bd1 = BankDeposite(p, y, r);
    bd1.Show();

    cout << "Enter the value of p ,y and  R  " << endl;
    cin >> p >> y >> R;

    bd2 = BankDeposite(p, y, R);
    bd2.Show();
  /*

   ew can also write like 
   BankDeposite bd= BankDeposite(p,y,r)

  */


    bd3.Show();
    return 0;
}