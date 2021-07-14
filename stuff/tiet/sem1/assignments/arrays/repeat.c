#include<stdio.h>
void main()
{
int a[10]={0};
int n;
printf("Enter a number");
scanf("%d",&n);
int m=n;
while(m>0)
{
int rem = m%10;
if(a[rem]==1)
	break;
a[rem]=1;
m/=10;
}
printf("Does the number have repetitive digits?\n");
if(m>0)
	printf("yes\n");
else
	printf("no\n");
}

