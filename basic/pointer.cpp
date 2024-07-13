#include<iostream>
using namespace std;

int main()
{
    cout<<"\n";
    // poinetr is use for stoge  add. of any variable 
    // pointer is a also variable

    int a;
    int *ptr;
    a=10;
    ptr=&a;

    cout<<"the add. of a is "<<ptr<<endl;
    
    cout<<"the  value of a is  "<<*ptr<<endl;

    //pointer to pointer

    int **c;
    c=&ptr;
    cout<<"the add. of ptr is "<<c<<endl;
     cout<<"the add. of ptr is "<<*c<<endl;
     cout<<"the value of ptr is "<<**c<<endl;
        
}