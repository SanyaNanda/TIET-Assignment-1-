#include<stdio.h>
//WAP to print all prime numbers between 2 and 500
void main()
{
	for(int n=2;n<=500;n++)
	{int count=0;
		for(int i=2;i<n;i++)
		{
		if(n%i==0)
		{
		count++;
		}
		}
	if(count==0)
	{
	printf("%d\n",n);
	}
	}
}
