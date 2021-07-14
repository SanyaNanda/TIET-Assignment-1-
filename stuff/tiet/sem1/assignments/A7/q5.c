#include<stdio.h>
// code for determining strong numbers
int fact(int a);
void main()
{
int n;
printf("Enter the upper limit of the range\n");
scanf("%d",&n);

	for(int a=1;a<=n;a++)
	{
	int k;
	k=a;
	int sum=0;
		while(k!=0)
		{
		int r;
		r=k%10;
		sum+=fact(r);
		k/=10;
		}

		if(sum==a)
		{
		printf("%d is a strong number\n",a);
		}
		else
		{
		continue;
		}
	}
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
