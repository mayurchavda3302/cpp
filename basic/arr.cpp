#include <iostream>
using namespace std;
int main()
{
  // array is an a collation of same type datatype
  //  array is stoge in contiguous  memory location in sequincial  method.

  // we can also make two dymansiol array
  int a[4] = {12, 2, 10, 2};
  // here we just make array of 4 size

  // pointer in array
  int *ptr = a;
  cout << "the value is" << *ptr << endl;
  // cthe defalut value of this array is a[0];
  cout << "the value is " << *(ptr + 1);
}