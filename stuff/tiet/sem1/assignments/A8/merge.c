#include<stdio.h>
void main()
{
int x,y,n;
printf("Enter the size of A");
scanf("%d",&x);
int a[x];
for(int i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the suze of B");
scanf("%d",&y);
int b[y];
for(int i=0;i<y;i++)
{
scanf("%d",&b[i]);
}
n=x+y;
int c[n];
for(int i=0;i<x;i++)
{
c[i]=a[i];
}
for(int i=x;i<n;i++)
{
c[i]=b[i-x];
}
for(int i=0;i<n;i++)
{
printf("%d",c[i]);
}
}

