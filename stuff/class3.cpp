#include<iostream>
using namespace std;
class emp
{
float basic;
public:
	void display()
	{ cout<< basic;}
	void input()
	{ cin>> basic;
	  display();}
};
int main()
{
emp x;
x.input();
}
