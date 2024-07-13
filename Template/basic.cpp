#include <iostream>
// this is the exmaple of Template
using namespace std;
/*
with the use of template we can make variable also many class with
no similar data types

there are two types of tamplate in c++
1. function template
2. class template

*/
template <class T> // here is the t is make deflaut data type and we can use it.
class vector
{
public:
    T size;
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T sum(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    // here the first value or first index of v1 wii be mulitiply with  first index of v2
    // at the end all the index wii multiplay and make totality of all the index 
    vector<int> v1(3); // here we can change the data types of tepmlate
    v1.arr[0] = 4;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    vector<int> v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 8;
    v2.arr[2] = 2;
    int a = v1.sum(v2);
    cout << a << endl;

    /*
    vector <flaot>v1(3);   // here is the type of templet is float
    v1.arr[0] = 4;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    vector<float> v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 1;
    v2.arr[2] = 2;
    float f=v1.sum();
    cout<<f<<endl;
    */

    return 0;
}