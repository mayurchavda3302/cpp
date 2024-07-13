#include<iostream>
using namespace std;
/*
this is the exmaple of deflaut parametars in template
*/
template <class T1=int,class T2=char>
class mayur
{
  public:
  T1 numbar;
  T2 fav_char;
  mayur(T1 a,T2 b)
  {
    numbar=a;
    fav_char=b;
  }
  void display()
  {
    cout<<"the number is :"<<numbar<<endl;
    cout<<"the favrate charater is :"<<fav_char<<endl;
  }
};
int main()
{
   mayur<> my(32,'h');
   my.display();
   cout<<endl;
   // we can also write like this
   
   mayur<float,char> my2(23.3232,'h');
   my2.display();
}