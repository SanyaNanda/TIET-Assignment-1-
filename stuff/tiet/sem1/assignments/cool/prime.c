#include<stdio.h>
void main()
{
int i,j,count=0;
for(i=2;i<=100;i++)
	{
	for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
			break;
			}
		}

	if(i==j)
		{
		printf("%d is aPrime Number\n",i);
		count++;
		}

	}
printf("Total Prime numbers = %d",count);
}
