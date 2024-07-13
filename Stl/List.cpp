#include <iostream>
#include <list>
using namespace std;
/*
here we make the function called Display it wii 
take object  of list.
*/
void Display(list<int> &lts)
{
    list<int>::iterator it;
    for (it = lts.begin(); it != lts.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> lst;     // list of 0 length
    list<int> lst2(3); //  empty list of size 7
    lst.push_back(5);
    lst.push_back(12);
    lst.push_back(43);
    lst.push_back(53);
    lst.push_back(90);
    lst.push_back(63);
   // Display(lst);

    // pop the elements
    //  lst.pop_front();
    //  lst.pop_back();
    // lst.remove(5);

    // sorting the list

    list<int>::iterator iter;
    iter = lst2.begin();
    *iter = 45;
    iter++;
    *iter = 34;
    iter++;
    *iter = 235;
    iter++;
    // Display(lst2);

    lst.sort();
    lst2.sort();
    // here is the array are merched
    lst.merge(lst2);
    Display(lst);

    // reverse the list
    lst.reverse();
    Display(lst);
    return 0;
}