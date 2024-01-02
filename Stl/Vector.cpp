#include <iostream>
#include <vector>

using namespace std;
template <class T>
void Diasplay(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
        // Here is the .at() wii gate the pointer number/ where is the pointer
    }
    cout << endl;
}
int main()
{
    vector<int> Vec1; // zero length vector
    int element, size;
    vector<char> Vec2(4);    // 4 element character vector
    vector<char> Vec3(Vec2); // 4 element character vector from vec2
    vector<int> vec4(6, 3);  //  6-elemtes  vector of 3s
   // Diasplay(Vec3);
   // int element, size = 5;
    /*
     cout << "enter the size of your vector : ";
       cin >> size;
       for (int i = 0; i < size; i++)
       {
           cout << "enter the element to add in vector  : ";
           cin >> element;
           Vec1.push_back(element);
       }
       vector<int>::iterator iter = Vec1.begin();
       // Vec1.pop_back();
       Diaplay(Vec1);
       Vec1.insert(iter + 1, 45);
       //  Vec1.insert(iter + 1, 2,45);  // here is the insret wii make 2 copy of element 45
      */
    //  Diasplay(Vec1);

    return 0;
}