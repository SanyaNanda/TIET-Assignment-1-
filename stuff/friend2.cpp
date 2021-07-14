#include<iostream>
using namespace std;
const int IDLE=0;
const int INUSE=1;
class c2;
class c1
{
int status;
public:
void set_data(int state);
friend int idle(c1 a,c2 b);
};
class c2
{
int status;
public:
void set_data(int state);
friend int idle(c1 a,c2 b);
};
void c1::set_data(int state)
{
this->status=state;
}
void c2::set_data(int state)
{
this->status=state;
}
int idle(c1 a,c2 b)
{
if(a.status || b.status) return 0;
else return 1;
}
int main()
{
c1 a;
c2 b;
a.set_data(IDLE);
b.set_data(IDLE);
if (idle(a,b)) cout<<"screen can be used"<<endl;
else cout<<"screen is in use"<<endl;
a.set_data(INUSE);
if (idle(a,b)) cout<<"screen can be used"<<endl;
else cout<<"screen is in use"<<endl;
}
