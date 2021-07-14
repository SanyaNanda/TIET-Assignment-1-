#include<stdio.h>
void main()
{
int n,c=1,d;
printf("Enter a number");
scanf("%d",&n);
d=n;
while(d>=1)
{
c=c*d;
d--;
}
printf("Factorial of %d is %d",n,c);
}


