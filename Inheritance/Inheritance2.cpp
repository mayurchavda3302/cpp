#include <iostream>
// example of Inheritance 😛
using namespace std;
/*
syntax of inheritance :

class  <derived_class_name> : <access-specifier/ visibility_mode> <base_class_name>
{
        //body
}
*/

class employee
{
public:
  int id;
  float salary;
  employee(int inID)
  {
    id = inID;
    salary = 34.0;
  }
  employee() {}
};

class progaramer : public employee
{
public:
  progaramer(int InId)
  {
    id = InId;
  }
  int Iangugecode = 9;
  void GetData()
  {
    cout << id << endl;
  }
};

int main()
{
  employee mayur(1), ravi(3);
  cout << mayur.salary << endl;
  cout << ravi.salary << endl;

  progaramer p1(12);
  cout << p1.Iangugecode << endl;
  p1.GetData();
  // cout<<p1.id<<endl;
  return 0;
}