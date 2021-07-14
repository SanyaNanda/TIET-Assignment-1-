#include<stdio.h>
// calculate the sum and product of each digit of a 3 digit number
void main()
{
int n,s,p,a;
n=325;
s=0;
p=1;

for (int i=1; i<=3;i++)
	{
	a=n%10;
	s=s+a;
	p=p*a;
	n=n/10;
	}
printf("the sum is:%d\n",s);
printf("the product is:%d\n",p);
}

	
