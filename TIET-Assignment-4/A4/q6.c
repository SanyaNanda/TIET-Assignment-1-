#include<stdio.h>
// check a three digit number for palindrome
void main()
{
int a,b,c,d;
printf("Enter a three digit number");
scanf("%d",&a);
b=a/100;
c=(a%100)/10;
d=a%10;
	if(b==d && d==b)
		{
		printf("Palindrome");
		}
	else
		{
		printf("Not Palindrome");
		}
}
