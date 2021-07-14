#include<stdio.h>
// determining largest number using conditional operators
void main()
{
int a,b,c,l;
printf("enter 3 numbers:\n");
scanf("%d%d%d",&a,&b,&c);
l= (a>b)?(a>c?a:c):(b>c?b:c);
printf("largest number is:%d",l);
}
