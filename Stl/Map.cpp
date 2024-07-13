#include <iostream>
#include <map>
#include <string>
#include <list>

// map is an associative array
using namespace std;
int main()
{
    map<string, int> marksmap;
    marksmap["mayur"] = 80;
    marksmap["ravi"] = 99;
    marksmap["hitesh"] = 85;

    marksmap.insert({{"jayesh", 342}, {"nitin", 42}});

    map<string, int>::iterator it; //  here is the "::" is scope revolution oprator
    for (it = marksmap.begin(); it != marksmap.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
        cout<<"the size is :"<<marksmap.size()<<endl;
        cout<<"the max size is :"<<marksmap.max_size()<<endl;
        cout<<"the  empty's return vlaue is :"<<marksmap.empty()<<endl;
    return 0;
}