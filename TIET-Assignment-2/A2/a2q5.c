#include<stdio.h>
// swapping two variables using a third variable
void main()
{
int a,b,c;
a=6;
b=7;
c=a+b;
b=c-b;
a=c-a;
printf("a=%d,b=%d",a,b);
}


