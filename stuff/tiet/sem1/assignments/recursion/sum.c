#include<stdio.h>
int sum(int);
void main()
{
int n;
scanf("%d",&n);
int a=sum(n);
printf("Sum=%d",a);
}

int sum(int n)
{
if(n>1)
	return n + sum(n-1);
return 1;
}
