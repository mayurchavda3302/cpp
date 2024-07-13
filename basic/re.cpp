#include <iostream>
// this is recursion
//  recursion  : when function it self is  called recursion
using namespace std;
int fact(int n);
int fibo(int n);
int main()
{
  int n;
  cout << "enter the n";
  cin >> n;

  // cout<<"the fatorial of "<<n<<"   is  "<<fact(n);
  //  cout<<"the fibonachi series position "<<n<<"  is  "<<fibo(n);
}
int fact(int n)
{
  // this is factorial of n number
  if (n <= 1)
  {
    return 1;
  }
  return n * fact(n - 1);
}
int fibo(int n)
{
  if (n < 2)
  {
    return 1;
  }
  // this is fibonachi seires
  return fibo(n - 2) + fibo(n - 1);
}
