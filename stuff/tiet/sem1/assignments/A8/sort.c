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
for(int i=0;i<n-1;i++)
{
for(int j=1;j<n;j++)
{
int temp;
if(a[i]>a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
