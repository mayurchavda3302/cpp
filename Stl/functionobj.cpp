#include <iostream>
#include <stdio.h>
// this is the exmaple of function object
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    char helllo[] = "mayur";
    printf("%s\n", helllo, "\n");
    // function objects (functor) : function wrapped in class it available like an object
    int arr[] = {12, 22, 2, 1, 223};
    // sort(arr, arr + 4);
    sort(arr, arr + 5, greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}