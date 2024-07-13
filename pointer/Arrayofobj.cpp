#include <iostream>
/*
this is the example :  ARRAY OF OBJECT USING pointer POINTER
*/
using namespace std;

class shop
{
    int id;
    float price;

public:
    void SetData(int a, float b)
    {
        id = a;
        price = b;
    }
    void GetData(void)
    {
        cout << "the id is  " << id << endl;
        cout << "the price of item is" << price << endl;
    }
};
int main()
{
    int size = 3;
    // int *ptr=&size;
    // int *ptr= new int[34];  // the ptr is alocate the memory of int

    shop *ptr = new shop[size];
    // here is ptrtemp is also same as like pointer 
    shop *ptrtemp=ptr;
/*
here is we make the ptrtemp pointer because the ptr is go in and the 2 and idex at the 
print/dislapy time the ptr is gone incrimet by 1 so the ptr is alreday in his last index
so the display time it wii be incrice by 1 at that time the  index of array(array of obj) rech 
at last so it wii does not give proper output 
*/
      int p;
    float q;
    for (int i = 0; i <size; i++)
    {
        cout<<"the id and price of item  :"<<i+1<<endl;
        cin>>p>>q;
       // (*ptr).SetData(p,q);
         ptr->SetData(p,q); // we can also write like this
         ptr++;    
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number "<<i+1<<endl;
        ptrtemp->GetData();
        ptrtemp++;
    }

    return 0;
}