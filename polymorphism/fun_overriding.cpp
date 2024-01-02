#include<iostream>
/*
this is the example of the function overriding.
function overriding is the run time polymorphism.
*/

using namespace std;
class machine
{
       public:
       virtual void show_state(){
            cout<<"machine is on"<<endl;
        }
};
class computer :public machine
{
    
       public:
        void show_state(){
            cout<<"computer is on"<<endl;
        }

};

int main()
{
    machine *c=new computer();
    c->show_state();

}