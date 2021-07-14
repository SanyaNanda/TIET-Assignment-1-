#include<stdio.h>
int fibo(int);
void main()
{
int n;
scanf("%d",&n);
printf("fibo series=%d",fibo(n));
}

int fibo(int n)
{
if(n<=1)
	return n;
return fibo(n-1) + fibo(n-2);
}
