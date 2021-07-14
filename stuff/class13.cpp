#include<iostream>
using namespace std;
//using new and delete on dynamic arrays
int main()
{
cout<<"Enter the number of elements"<<endl;
int n,*p;
cin>>n;
p=new int [n];
for(int i=0;i<n;i++)
{
cin>>p[i];
}
for(int i=0;i<n;i++)
{
cout<<p[i]<<"\t";
}
delete p;
return 0;
}
