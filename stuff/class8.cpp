#include<iostream>
using namespace std;
class time
{
	int h,m,s;
	public:
	void get_time(int p,int q,int r)
	{ h=p; m=q; s=r;}

	void put_time()
	{
	cout<<h<<":"<<m<<":"<<s<<endl;
	}
	void sum_time(time t1,time t2)
	{
	s=t1.s+t2.s;
	m=s/60;
	s%=60;
	
	m=m+t1.m+t2.m;
	h=m/60;
	m%=60;
	
	h=h+t1.h+t2.h;
	}
};
int main()
{
time t1,t2,t3;
t1.get_time(1,30,15);
t2.get_time(4,30,55);
t3.sum_time(t1,t2);
cout<<"T1:";t1.put_time();
cout<<"T2:";t2.put_time();
cout<<"T3:";t3.put_time();
return 0;
}
