#include<iostream>
using namespace std;
class obj
{
int a;
public:
void reveal()
{
cout<<"Address of the object is:"<<this<<endl;
}
};
int main()
{
obj x,y;
x.reveal();
y.reveal();
}
