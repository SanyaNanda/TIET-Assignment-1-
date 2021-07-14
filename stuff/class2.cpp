#include<iostream>
using namespace std;
class myclass
{
int a,b;
public:
	void init(int x,int y){a=x;b=y;}
	void show() {cout <<a<<endl<<b;}
};
int main()
{
myclass c;
c.init(20,30);
c.show();
return 0;
} 

