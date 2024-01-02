#include <iostream>
using namespace std;
// memory allocation using arry in class 
class shop
{
    int itemid[5];// we create array size of 5
    int itemprice[5];
    int counter;

public:
    void initcounter(void) { counter = 0; }// here we give 
    void setprice(void);
    void dispaly(void);
};
void shop::setprice(void)
{
    cout << "entr id of item no" << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter the price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::dispaly(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item  id " << itemid[i] << " is :" << itemprice[i] << endl;
    }
}
int main()
{
    shop s1;
    s1.initcounter();
    s1.setprice();
    s1.setprice();
    s1.setprice();

    s1.dispaly();
    // vodoe no -23
}