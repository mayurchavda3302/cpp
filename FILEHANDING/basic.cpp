#include <iostream>
#include <fstream>
/*
this is the example of file reading and writing

useful classes for working with files in c++
1.fstreambase
2.ifstream -->derived from fstrambase
3.ofstream -->derived from fstrambase



there are two ways to open a file
1.using the constructor
2.using the  member function open() of class
*/
using namespace std;
int main()
{
    // open the file using constructor and write on it
    /*
        string hy = "mayur chavda";
        out << hy; // here it is write in the file (basic.cpp)
     ofstream out("basic.txt");
    */
    // open the file using constructor and read on it
    ifstream in("basic.txt");
    string hello;
    getline(in, hello);
    cout<<hello<<endl;
    getline(in, hello);
    cout<<hello;
    //    in >> hello;
    // cout << "the writed in file is " << hello;
}