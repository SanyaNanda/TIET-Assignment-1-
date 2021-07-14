#include<iostream>
using namespace std;
// Use of reference variable
int main()
{
int a=10;
int &ref=a;
cout<<"a="<<a<<"\t"<<"ref="<<ref<<endl;
ref+=5;
cout<<"a="<<a<<"\t"<<"ref="<<ref<<endl;
return 0;
}
