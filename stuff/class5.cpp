#include<iostream>
using namespace std;
class emp
{
	char name[10];
	int age;
	public:
	void getdata();
	void putdata();
};
void emp::getdata()
{
cout<<"Enter name:";cin>>name;
cout<<"Enter age:";cin>>age;
}
void emp::putdata()
{
cout<<"\t Name:"<<name<<"\t Age:"<<age<<endl;
}

int main()
{
	emp manager[3];
	for(int i=0;i<3;i++)
	{
	cout<<"\n Enter details of manager "<< i+1<<endl;
	manager[i].getdata();
	}
	for(int i=0;i<3;i++)
	{
	cout<<"\n manager "<< i+1<<endl;
	manager[i].putdata();
	}
	return 0;
}
