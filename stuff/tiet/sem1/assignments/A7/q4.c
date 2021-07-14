#include<stdio.h>
#include<math.h>
// checking if the input number is prime,armstrong and perfect or not
int Prime(int);
int Armstrong(int);
int Perfect(int);
int main()
{
int n;
int m=1;
int *p,*q,*r;
p=&m;
q=&m;
r=&m;
printf("Enter a number\n");
scanf("%d",&n);
*p=Prime(n);
if(*p==0)
	{
	printf("PRIME\n");
	}
	else
	{
	printf("NOT PRIME\n");
	}
*q=Armstrong(n);
if(*q==n)
	{
	printf("ARMSTRONG\n");
	}
	else
	{
	printf("NOT ARMSTRONG\n");
	}
*r=Perfect(n);
	if(*r==n)
	{
	printf("PERFECT\n");
	}
	else
	{
	printf("NOT PERFECT\n");
	}
}

int Prime(int num)
{
int count=0;
for(int i=2;i<num;i++)
{
if(num%i==0)
	count++;
}return count;
}

int Armstrong(int num)
{
int a,b,count=0,sum=0;
a=num;
while(a!=0)
{
a/=10;
count++;
}
b=num;
while(b!=0)
{
int r;
r=b%10;
sum+=pow(r,count);
b/=10;
}return sum;
}

int Perfect(int num)
{
int some=0;
for(int i=1;i<num;i++)
{
if(num%i==0)
	some +=i;
}return some;
}






