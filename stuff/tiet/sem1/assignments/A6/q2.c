#include<stdio.h>
// counting and printing all the perfect numbers between 1 to 500
//WAP to find and print all perfect numbers between 1 and 500 using a nested loop.
static int count=0;
void main()
{
for(int n=1;n<=500;n++)
	{
	int sum=0;
	for(int i=1;i<n;i++)
	{
	if(n%i==0)
	{
	sum+=i;
	}
	}
	if(sum==n)
	{
	printf("%d\n",sum);
	count++;
	}
	else
	{
	continue;
	}
	}

printf("count = %d",count);
}
