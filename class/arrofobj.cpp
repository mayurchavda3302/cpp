#include <iostream>
using namespace std;
// here we make objects of array and passing objects as a function
//          arguments
class complex
{
    int a;
    int b;

public:
    void SetData(int v1, int v2)
    {
        a = v1;
        b = v2;
     /*
        here we give make a=v1  and b= v2 because A and Bis a private varible
        so we can not accese  varible A  and B directly  so we can make varibale
         v1 and v2

      */
    }
    void SetDataBySum(complex o1, complex o2)
    // here complex is a object
    // here we pass object to the function  as a argument
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        /*
        when function c3 is called that c3 is give value of c1 and c2 
        which we called thase function with  c1 and c2

        after c1 and c2 is called value of a and b in c1 and c2 is 
        make sum and give as a complex number 
        */


    }
    void Printnumber()
    {
        cout << "your complex number is" << a << "+" << b << " i" << endl;
    }
};

/*
class worker
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 1222;
        cout << "enter the id of worker :";
        cin >> id;
    }
    void GetId(void)
    {
        cout << "the id of worker is : " << id << endl;
    }
};
*/

int main()
{
    /*
    worker mayur, ravi, jay;
    mayur.setId();
    mayur.GetId();

    worker wo[3]; // here we make array of worker class also called obeject of ARRY

    for (int i = 0; i < 3; i++)
    {
        wo[i].setId();
        wo[i].GetId();
    }

    */
    complex c1, c2, c3; // here we make object of classs called c1,c2 and c3
    c1.SetData(4, 9);
    c1.Printnumber();

    c2.SetData(15, 1);
    c2.Printnumber();

    c3.SetDataBySum(c1, c2);
    c3.Printnumber();
    // here we can call function SetDataBySum  with the value of c1 and c2 

    return 0;
}
