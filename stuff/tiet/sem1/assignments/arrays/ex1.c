#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int large=a[0];
int small=a[0];
for(int i=0;i<n;i++)
{
if(small>a[i])
	small=a[i];
if(large<a[i])
	large=a[i];
}
printf("Largest element=%d\n",large);
printf("Smallest element=%d",small);
}
