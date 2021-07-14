#include<iostream>
using namespace std;
class device
{
static int shared_resource;
public:
static int get_resource()
{
if (shared_resource) return 0;
if(!shared_resource) shared_resource=1; return 1;
}
int free_resource()
{
shared_resource=0;
return 0;
}
};

//static int device::get_resource()
//{
//if (shared_resource) return 0;
//if(!shared_resource) shared_resource=1; return 1;
//}

//int device::free_resource()
//{
//shared_resource=0;
//return 0;
//}

int device::shared_resource;

int main()
{
device o1,o2;
if(o1.get_resource())
cout<<"shared resource with o1"<<endl;
o2.get_resource();
if (!device::get_resource())
{cout<<"o2 access denied"<<endl;}
o1.free_resource();
o2.get_resource();
if (!device::get_resource())
{cout<<"shared resource with o2"<<endl;}
}



