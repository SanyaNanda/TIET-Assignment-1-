#include<iostream>
using namespace std;
class myclass
{
	public:
	int i,j,k;
};
int main()
{
	myclass a,b;
	a.i=10;
	a.j=11;
	a.k=a.i*a.j;
	b.k=12;
	cout<<a.k<<" "<<b.k;
	return 0;
}

