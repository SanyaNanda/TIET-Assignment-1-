#include<stdio.h>
//bubble_sort , sorting in ascending order
void sort(int *p,int n);
void main()
{
int n;
printf("Size of the array");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sort(a,n);
printf("Sorted array\n");
for(int i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}

void sort(int *a,int n)
{
int i=0,j,f=0,temp;
while(i++<n && !f)
{
f=1;
for(j=0;j<n-i;j++)
{
if(*(a+j)>*(a+j+1))
{
temp=a[j];
a[j] =a[j+1];
a[j+1]=temp;
f=0;
}
}
}
}



