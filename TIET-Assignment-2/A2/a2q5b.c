#include<stdio.h>
// swapping two variable without using a third variable
void main()
{
int a,b;
a=6;
b=7;
a=a+b;
b=a-b;
a=a-b;
printf("a=%d,b=%d",a,b);
}
