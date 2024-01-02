#include <iostream>

using namespace std;
class Base1
{
protected:
    int Roll_number;

public:
    void Set_Roll_number(int a)
    {
        Roll_number = a;
    }
    void Get_roll_number()
    {
        cout << "your Roll number is " << Roll_number << endl;
    }
};
class Base2 : virtual public Base1
{
protected:
    int maths;
    int chemistery;

public:
    void Set_marks(int m, int m1)
    {
        maths = m;
        chemistery = m1;
    }
    void Get_marks()
    {
        cout << "your marks in maths : " << maths;
        cout << "your makrs in chemistery :" << chemistery << endl;
    }
};
class Base3 : virtual public Base1
{
protected:
    int score;

public:
    void Set_score(int s)
    {
        score = s;
    }
    void Get_score()
    {
        cout << "your score is :" << score;
    }
};
class derived : public Base2, public Base3
{
protected:
    int result;

public:
    void display()
    {
        result = maths + chemistery + score;
        Get_roll_number();
        Get_marks();
        Get_score();
        cout<<"your result is :"<<result<<endl;
    }
};
int main()
{
    derived d1;
    d1.Set_Roll_number(1);
    d1.Set_marks(89,96);
    d1.Set_score(25);
    d1.display();

    return 0;
}