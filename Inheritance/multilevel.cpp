#include<iostream>
using namespace std;
/*
example of multilevel inheritance 
*/

class student
{
   protected :
   int Roll_number;
   public :
   void set_roll_number(int r)
   {
    Roll_number=r;
   }
   void get_roll_number(void)
   {
   cout<<"the roll number is :"<<Roll_number<<endl;
   }
};
class Exam: public student
{
   protected :
   float maths;
   float physics;
   public:
   void set_marks(float,float);
   void get_marks(void);
};
void Exam ::set_marks(float m1,float m2)
{
  maths=m1;
  physics=m2;
}
void Exam ::get_marks()
{

cout<<"the marks obtained in maths are "<<maths<<endl;
cout<<"the marks obtained in physics are "<<physics<<endl;
//cout<<"the marks obtained in physics are "<<m2<<ebdl;
}

class Result: public Exam 
{
   float purcentage;
   public :
   void  Display()
   {
     get_roll_number();
     get_marks();
     cout<<"your percentage is "<<(maths+physics)/2<<endl;

   }
};
int main()
{
Result mayur;
mayur.set_roll_number(1);
mayur.set_marks(92,90);
mayur.Display();

return 0;
}