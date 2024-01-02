#include<iostream>
using namespace std;

int main()
{ int num=13;
    try{
        try{
         if(num<=20){
            throw num;
         }
        }
        catch(int num)
        {
          cout<<" insdie the catch function of nested try"<<endl;
        }
    }
    catch(...){
        cout<<"inside the catch function"<<endl;
    }
}