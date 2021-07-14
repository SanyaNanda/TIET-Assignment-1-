#include<stdio.h>
// computing a summation of a formula
int fact(int a);
int sum(int a);
void main()
{
int a;
printf("Enter a number");
scanf("%d",&a);
sum(a);
}

int fact(int a)
{
int prod=1;
for(int i=1;i<=a;i++)
{
prod*=i;
}
return prod;
}

int sum(int a)
{
int sum=0;
for(int i=1;i<=a;i++)
{
sum+= fact(i)/i;
}
printf("sum=%d",sum);
}

