#include<iostream>
using namespace std;

void num(int num)
{
    if(num<=100)
    {
      throw num;
    }
  
}
int main()           
{
    try{
     num(34);
    }
    catch(...){
     cout<<"the numner function wii be throw "<<endl;
    }



    // int num=10;
    // try{
    //   cout<<"inside the try"<<endl;

    //   if(num<=18)
    //   {
    // throw num;
    //   }
    // }
    // catch(int num){
    //   cout<<"inside the catch function"<<endl;
    // }
}