#include<stdio.h>
// code for Floyd's Triangle
void main()
{
int n;
printf("Enter a digit");
scanf("%d",&n);
for(int i=1,a=1;i<=n;i++)
	{
	for(int j=1;j<=i;j++)
		{
		printf("%d  ",a);
		a++;
		}
	printf("\n");
	}
}
