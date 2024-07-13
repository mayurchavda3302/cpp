#include<iostream>

using namespace std;


int main(){
 int num=10;

 try{
    if (num>5)
    {
        throw num;
    }
    
 }
 catch(int num){
    cout<<"the  variable num wii be thorwed "<<num<<endl;
 }
 return 0; 
}