#include <iostream>
using namespace std;
template <class T>

class hy
{
private:
  T n;
  T *size;
public:
    hy(int m)
    {
        n = m;
        size = new T[n];
    }
     T sum(vector &v)
    {
        T d = 0;
        for (int i = 0; i < n; i++)
        {
            d += this->size[i] * v.size[i];
        }
            return d;
    }
};

int main()
{
    hy<int>hy3(2);
   
}
