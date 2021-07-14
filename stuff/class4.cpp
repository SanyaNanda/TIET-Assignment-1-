#include<iostream>
#include<stdio.h>
using namespace std;
class array
{
	int a[10];
public:
	void set_data();
	void sort();
	void display();
};
void array::set_data()
{
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
}
void array::sort()
{
	for(int i=0;i<9;i++)
		for(int j=0;j<9-i;j++)
		{
		if(a[j]>a[j+1])
		{
		a[j]=a[j]+a[j+1];
		a[j+1]=a[j]-a[j+1];
		a[j]=a[j]-a[j+1];
		}
	}
}
void array::display()
{
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<'\t';
	}
}

int main()
{
array arr;
arr.set_data();
arr.sort();
arr.display();
}
