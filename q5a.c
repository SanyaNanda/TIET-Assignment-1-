#include<stdio.h>
//WAP to perform mathematical operations on two integer numbers.
int main()
{
int a,b,sum,diff,prod,div,mod;
scanf("%d",&a);
scanf("%d",&b);

sum=a+b;
printf("sum  = %d\n",sum);

diff=a-b;
printf("diff = %d\n",diff);

prod=a*b;
printf("prod = %d\n",prod);

div=b/a;
printf("div  = %d\n",div);

mod=b%a;
printf("mod  = %d\n",mod);
}

