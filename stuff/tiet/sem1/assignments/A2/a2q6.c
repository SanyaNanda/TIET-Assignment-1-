#include<stdio.h>
// swapping three variable without using another variable
void main()
{
int a,b,c;
a=5;
b=6;
c=7;
a=a+b+c;
c=a-c-b;
b=a-c-b;
a=a-c-b;

printf("a=%d  b=%d   c=%d",a,b,c);
}

// swapping three variables with the usage of a fourth variable
void main()
{
int a,b,c,d;
a=5;
b=6;
c=7;
d=a+b+c;
a=d-a-b;
b=d-a-b;
c=d-a-b;
printf("a=%d  b=%d   c=%d",a,b,c);
}

