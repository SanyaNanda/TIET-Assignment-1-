#include<stdio.h>
// code for Pascals Triangle
int fact(int n);
void main()
{
int n;
printf("Enter a digit");
scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{	for(int k=0;k<n-i;k++)
		{
		printf("  ");
		}
		for(int j=0;j<=i;j++)
		{
		printf("%d   ", fact(i)/(fact(j)*fact(i-j)));
		}
	printf("\n");
	}
	
}

int fact(int n)
{
int p=1;
	for(int i=1;i<=n;i++)
	{
	p*=i;
	}
return p;
}
