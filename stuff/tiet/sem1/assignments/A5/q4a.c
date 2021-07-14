#include<stdio.h>
// code of a pattern
		//1
	//2	3	2
//3	4	5	4	3 .....
void main()
{
int n;
printf("Enter a digit");
scanf("%d",&n);
for(int i=1;i<=n;i++)
	{
	for(int k=n-i;k>=1;k--)
		{
		printf("  ");
		}

	for(int j=i;j<=(2*i)-1;j++)
		{
		printf("%d",j);
		printf(" ");
		}

	for(int j=(2*i)-2;j>=i;j--)
		{
		printf("%d",j);
		printf(" ");
		}

	printf("\n");
	}
}
