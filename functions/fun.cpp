#include<iostream>
using namespace std;
//this is a udf called user difine funtion
// there are two types of funtions
    // 1- build-in
   // 2- user difine 
// function overloading
int add(int a,int b); // this is parametars
int add(int a,int b,int c);
int volume(double r, int h);
int volume(int a);
int main()
{
   
   //cout<<"the sum of 3 and 6 is"<<add(3,6)<<endl;
   //cout<<"the sum of 3,7 and 5 is"<<add(3,7,5)<<endl;
  cout<<"the volume of cylinder is"<<volume(2,4)<<endl;
  cout<<"the cube of 2 is "<<volume(2)<<endl;


}
// this is calulate volume of cylinder
int volume(double r, int h)
{
 return(3./14*r*r*h);
}
// thiis is calulate volume of cube
int volume(int a)
{
 return a*a*a;
}







int add(int a,int b)
{
   cout<<endl;
   cout<<"using 2 arguments"<<endl;
   return a+b;
}
int add(int a,int b,int c)
{
 cout<<"using 3 arguments"<<endl;
 return a+b+c;
}