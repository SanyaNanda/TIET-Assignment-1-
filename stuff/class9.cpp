#include<iostream>
using namespace std;
class swap
{
public:
int static a,b;
int *p=a;
int *q=b;
void swapp(int*p,int*q)
{
int z;
z=*p;
*p=*q;
*q=z;
}
};
int swap::a;
int swap::b;
int main()
{
swap s;
s.swapp(10,12);
cout<<s.a<<'\t'<<s.b;
}

