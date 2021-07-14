#include<stdio.h>
void main()
{
int sum=0,count=0;
for(int n=1;n<=500;n++)
	{
	for(int i=1;i<=n;i++)
	{
	if(n%i==0)
	{
	sum+=i;
	}
	if sum==n;
	{
	printf("%d";sum);
	count++;
	}
	}
printf("count = %d"count);
}
