#include<stdio.h>
// reversing numbers
void main()
{
int num,e,rem,rev=0;
printf("Enter a number:");
scanf("%d",&num);
e=num;
while(e!=0)
	{
	rem=e%10;
	rev = rev*10 + rem;
	e/=10;
	}
printf("Reverse of the number is:%d",rev);
}
