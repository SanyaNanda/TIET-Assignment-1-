#include<stdio.h>
//simple illustration of pointer to pointer
void main()
{
int d, *a,**b;
a=&d;
b=&a;
**b=10;
printf("d=%d\n",d);
*a=20;
printf("d=%d\n",d);
d=30;
printf("d=%d\n",d);
}

