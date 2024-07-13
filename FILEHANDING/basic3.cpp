#include <iostream>
#include <fstream>
#include<cstring>
#include<stdlib.h>
#include<sql.h>
/*
this the example of open() and eof() functions
we can open and close file using the functions
*/
using namespace std;
int main()
{
    
    ofstream out;
    out.open("basic4.txt");
    out << "this is me\n";
    out << "this is me also\n";
    out<<"hello ";
    out.close();
    
    ifstream in;
    in.open("basic4.txt");
    string st;
    // in >> st;
    // cout << st;
    while (in.eof() ==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    

    return 0;
}