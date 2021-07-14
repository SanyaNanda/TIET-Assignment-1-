#include<stdio.h>
void add(int *p,int *q);
void main()
{
int b[]={1,2,3,4,5};
int a[]={2,3,4,5,6};
add(a,b);
}

void add(int *p,int *q)
{
int c[5];
for(int i=0;i<5;i++)
{
*(c+i)=*p + *q;
printf("%d\n",*(c+i));
p++;
q++;
}
}


