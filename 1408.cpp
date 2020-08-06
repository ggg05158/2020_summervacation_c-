#include <iostream>
using namespace std;
class Time {
public:	
	int hour;
	int min;
	int sec;
	Time(int h=0,int m=0,int s=0) {
		hour = h;
		min = m;
		sec = s;
	}
	void print() {
		if (hour < 10)
			cout << "0" << hour << ":";
		else
			cout << hour << ":";
		if (min < 10)
			cout << "0" << min << ":";
		else
			cout << min << ":";
		if (sec < 10)
			cout << "0" << sec;
		else
			cout << sec;
	}
};
Time subs(Time n1, Time n2)
{
	int h=0, m=0, s=0;
	if (n1.sec >= n2.sec)
		s = n1.sec - n2.sec;
	else {
		s = 60 + n1.sec - n2.sec;
		if (n1.min != 0)
			n1.min -= 1;
		else {
			n1.min -= 1;
			n1.hour -= 1;
			n1.min += 60;
		}
	}
	if (n1.min >= n2.min)
		m = n1.min - n2.min;
	else {
		m = 60 + n1.min - n2.min;
		n1.hour -= 1;
	}
	h = n1.hour - n2.hour;
	Time temp(h, m, s);
	return temp;
}
int main()
{
	Time nowT, comT,Day(24,0,0);
	char c;
	cin >> nowT.hour >> c >> nowT.min >> c >> nowT.sec;
	cin >> comT.hour >> c >> comT.min >> c >> comT.sec;
	if (comT.hour > nowT.hour)
		subs(comT, nowT).print();
	else if (comT.hour < nowT.hour)
		subs(Day, subs(nowT, comT)).print();
	else {
		if (comT.min > nowT.min)
			subs(comT, nowT).print();
		else if (comT.min < nowT.min)
			subs(Day, subs(nowT, comT)).print();
		else {
			if(comT.sec>nowT.sec)
				subs(comT, nowT).print();
			else
				subs(Day, subs(nowT, comT)).print();
		}
	}
	return 0;
}