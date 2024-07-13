#include <iostream>
#include <cstring>
using namespace std;
// this is the exmaple of virtual class
class mayur
{
protected:
    string name;
    float rating;

public:
    mayur(string h, float r)
    {
        name = h;
        rating = r;
    }
    virtual void Display()=0;
    // abstract class menas that class which from make another class also called that type of class from we inherted another class
    //  Abstact class also this class in which one puru virtual function. also say one pure varitul function is on the Abstract class
    
    // here is we make pure virtual function
    // it  wii do nothing 

};

class video : public mayur
{
    float lentgth;

public:
    video(string hy, float r, int vl) : mayur(hy, r)
    {
        lentgth = vl;
    }
  
  
   void Display()
    {
        cout << "this is mayur chavda :" << name << endl;
        cout << "rating :" << rating << endl;
        cout << "lenth is :" << lentgth << endl;
        cout << endl
             << endl;
    }
  
};
class Words : public mayur
{
    int words;

public:
    Words(string hello, float r, int word) : mayur(hello, r)
    {
        words = word;
    }

 
 void Display()
    {
        cout << "FROM BELOW THE WORDS CLASS IS EXITUTED " << endl;
        cout << "this is name :"<< name << endl;
        cout << "rating :" << rating << endl;
        cout << "woeds are :" << words << endl;
    }
   
};
int main()
{
    string name;
    float rating, vlen;
    int word;

    name = "mayur chavda";
    rating = 12.5;
    vlen = 13.232;

    video hello(name, rating, vlen);
    // hello.Display();

    name = "mayur chavda";
    word = 12;
    rating = 4.67;
    Words mayurword(name, rating, word);
    //  mayurword.Display();

    mayur *may[2];  // here  we make the pointer of base class
    may[0] = &hello;
    may[1] = &mayurword;

    may[0]->Display();
    may[1]->Display();

    return 0;
}
