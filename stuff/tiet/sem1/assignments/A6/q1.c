#include<stdio.h>
// printing a number pattern
void main()
{
int j=1;
do
	{
	int i =1;
		do
		{
		printf("%d\t",i);
		i++;
		}while(i<=5);
		printf("\n");
		j++;
	}while(j<=5);
}

