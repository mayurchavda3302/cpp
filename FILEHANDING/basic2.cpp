#include <iostream>
#include <fstream>
/*
this is 2nd exmaple of filehanding
*/
using namespace std;
int main()
{
    ofstream out("basic2.txt");
    string name;
    cout<<"enter your name:";
    cin>>name;
    //write a string to the file
    out<<"my name is :"+ name;
    out.close();

    ifstream in("basic2.txt");
    string hy;
    //in>>hy;
    //cout<<"the contet in file is :"<<hy;
    getline(in,hy);
    cout<<hy;


}