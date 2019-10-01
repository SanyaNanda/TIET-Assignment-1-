#include<stdio.h>
// WAP to perform mathematical operations on 2 float numbers
void main()
{
float a,b,sum,diff,prod,div;
int mod;
scanf("%f",&a);
scanf("%f",&b);

sum=a+b;
printf("sum  = %f\n",sum);

diff=a-b;
printf("diff = %f\n",diff);

prod=a*b;
printf("prod = %f\n",prod);

div=b/a;
printf("div  = %f\n",div);

        	// mod function for float always gives zero, as the  			quotient we obtain is also a float
mod=b%a;
printf("mod  = %d\n",mod);
}
