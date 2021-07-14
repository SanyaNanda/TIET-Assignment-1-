#include<iostream>
using namespace std;
class number
{
	static int a,c;
	int b;
	public:
	//static int c;
	void setter(int b,int c);
	void getter();
};

void number::setter(int i,int j)
{
a++; b=i;c=j;
}
//void number::setter(int b,int c)
//{
//a++;
//this>>b=b;
//this>>c=c;
//}
void number::getter()
{
cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
}
int number::a=10;
int number::c;
int main()
{
number n1,n2;
n1.setter(1,2);
n2.setter(2,3);
n1.getter();
n2.getter();
return 0;
}

