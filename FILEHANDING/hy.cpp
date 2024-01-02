#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream of("hello.txt");
    string name="mayur chavda";
    of<<name;
    of.close();
    ifstream ifof("hello.txt");
    string twona;
    getline(ifof,twona);
    cout<<twona;
    ifof.close();
    return 0;
 
}