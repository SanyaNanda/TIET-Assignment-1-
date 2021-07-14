#include<iostream>
using namespace std;
class Time
{		int h, m, s;
	public:
		void getTime(int p, int q, int r)
		{	h = p; m = q; s = r;	}
		void putTime()
		{	cout << h << ":" << m << ":" << s << endl;	}
		void sumTime(Time t1, Time t2)
		{	s = t1.s + t2.s;
			m = s / 60;			s = s % 60;
			m = m + t1.m + t2.m;
			h = m / 60;			m = m % 60;
			h = h + t1.h + t2.h;	}
};
int main()
{	Time t1, t2, t3;
	t1.getTime(1,30,15);
	t2.getTime(4,30,55);
	t3.sumTime(t1,t2);
	cout << "T1: "; t1.putTime();
	cout << "T2: "; t2.putTime();
	cout << "T3: "; t3.putTime();
	return 0;
}

