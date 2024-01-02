#include<iostream>
using namespace std;
class counter
{ 
    public:
    static int count;
    void incresecout();
    void showcount();
};
int counter::count;

void counter::incresecout()
{
count++;
}
void counter::showcount()
{
    cout<<"count-"<<count<<endl;
    
}
int main()
{
    counter c1;
    c1.incresecout();
    c1.showcount();
   counter c2;
   c2.incresecout();
   c2.showcount();
  counter c3;
  c3.incresecout();
  c3.showcount();
}