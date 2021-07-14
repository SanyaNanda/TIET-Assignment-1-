#include<stdio.h>
// code to count the numbers divisible by 2 or 3 for numbers between 1-200
void main()
{
int count=0;
for(int i=1;i<=200;i++)
{
	if(i%2!=0 || i%3!=0)
		{
		count++;
		}
	
}
printf("count=%d",count);
}

