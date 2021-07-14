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
int pos;
printf("Enter the position of the element to be deleted");
scanf("%d",&pos);
pos--;
for(int i=pos;i<n-1;i++)
{
a[i]=a[i+1];
}
for(int i=0;i<n-1;i++)
{
printf("%d",a[i]);
}
}
