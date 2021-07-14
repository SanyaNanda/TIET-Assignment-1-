#include<stdio.h>
int fact(int);
void main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
int a=fact(n);
printf("The Factorial of the given number is %d",fact(n));
}

int fact(int n)
{
if(n>1)
	return n*fact(n-1);
return 1;
}


