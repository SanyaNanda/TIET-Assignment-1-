#include<stdio.h>
void main()
{
int a,b,c,big;
printf("Enter 3 numbers");
scanf("%d %d %d",&a,&b,&c);
big=a>b?a:b>c?b:c;
printf("The biggest number is %d",big);
}
