#include<iostream>
//pass by reference
using namespace std;
class convert
{
	public:
	int i;
	void increment(convert &obj)
	{
	obj.i=obj.i*2;
	cout<<"Value of i in the member function:"<<obj.i<<endl;
	}
};
int main()
{
convert obj1;
obj1.i=3;
obj1.increment(obj1);
cout<<"Value of i in main:"<<obj1.i<<endl;
return 0;
}
