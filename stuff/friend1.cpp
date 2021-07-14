#include<iostream>
using namespace std;
class obj
{
int a,b;
public:
void set_data(int a,int b)
{
this->a=a;
this->b=b;
}
friend int add(obj);
};int add(obj x)
{
return x.a+x.b;
}
int main()
{
obj x;
x.set_data(3,4);
cout<<"the sum : "<<add(x)<<endl;
return 0;
}
