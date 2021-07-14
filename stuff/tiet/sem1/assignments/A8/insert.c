#include<stdio.h>
void main()
{
int n;
printf("Enter the size of the array");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter a new element and it's position");
int new,pos;
scanf("%d %d",&new,&pos);
pos--;
for(int i=n;i>pos;i--)
{
a[i]=a[i-1];
}
a[pos]=new;
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
