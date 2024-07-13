#include<iostream>
// in c++ the structuar wii be reapled all can say we use class.
using namespace std;
// structur  is user define data type wich use for stoge diffrent
// structur is collation of diffrent type of data types
struct  hello
{
    // there is a statemant where is code wii start
    int num;
    float marks;
    char favchar;
};
 typedef struct emp
 // typedef wii change name of any data type
 {
    int num;
    float marks;
 }em;
 union hy
 {
    /* data */
 };
/*
there is also UNIONS use it is same like strucute but the
main difrence is that UNIONS is storge size of lage type
but struct wii storge size of totlity of variable which is struct
*/



int main()
{
  struct  hello s1;
  // here we make  variable of struct 
  s1.favchar='a';
  s1.marks=64.848;  
  s1.num=1;
  cout<<"the   number is "<<s1.num<<endl;
 cout<<"the  marks of student is "<<s1.num<<endl;
   cout<<"fav char  is "<<s1.favchar<<endl;
   cout<<endl;
   cout<<endl;
   em mayur;
   mayur.marks=98.87;

 cout<<"the value of em.num is"<<mayur.marks<<endl;
}

/*
the syntax of Structure is 
  struct <structur_name>
  {
   <data_type> <var_name>
  }

*/