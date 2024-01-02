#include <iostream>
#include <conio.h>

using namespace std;

// Example
class Time
{
	private:
		int hours, minutes;
		
	public:
		void set_time(int h, int m);
		void show_time();
		
		friend Time add_time(Time t1, Time t2);
};

void Time::set_time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::show_time()
{
	cout << hours << " : " << minutes << "\n";
}

Time add_time(Time t1, Time t2)
{
	Time time;
	time.hours = t1.hours + t2.hours;
	time.minutes = t1.minutes + t2.minutes;
	
	return time;
}

int main()
{
	Time t1, t2;
	t1.set_time(10, 50);
	t2.set_time(5, 20);
	
	Time total = add_time(t1, t2);
	total.show_time();
	
	getch();
	return 0;
}
