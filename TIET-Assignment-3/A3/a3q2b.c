#include<stdio.h>
// automorphic number: a number whose square ends with the number itself  
void main()
{
int a,b,c;
printf("enter a number\n");
scanf("%d",&a);
b=a*a;
c=b%10;
printf("%s", (c==a)?"yes":"no");
}

