#include<iostream>
#include<cstring>
using namespace std;
class person
{
int age;
char name[20] ;
public:
void set_data(const char* s,int a)
{
strcpy(name,s);
this->age=a;
}
person& greater(person &x)
{
if(x.age>age) return x;
else return *this;
}
void display()
{
cout<<name<<" with age "<<age<<endl;
}
};
int main()
{
person p1,p2,p3;
p1.set_data("sanya",19);
p2.set_data("shashi",45);
p3.set_data("stavik",16);
person p=p2.greater(p3);
cout<<"elder person : ";
p.display();
}
