#include<iostream>
using namespace std;
//Application of new and delete function on a pointer
int main()
{
int *p;
p=new int(34);
cout<<"p="<<p<<endl;
delete p;
return 0;
}
