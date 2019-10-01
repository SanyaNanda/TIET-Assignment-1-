#include<stdio.h>
#include<math.h>
// WAP to compute simple and compound interest
void main()
{
int b;
float p,r,t,i,a,d;
printf("enter a value for principal amount\n");// scanning principal amount
scanf("%f",&p);
printf("p= %f\n",p);

printf("enter a value for rate amount\n");// scanning the annual rate of interest
scanf("%f",&r);
printf("r= %f\n",r);

printf("enter a value for years\n");	  // scanning the time period
scanf("%f",&t);	
printf("t= %f\n",t);

i = p*r*t/100;				  // simple interest
a = i+p;
printf("simple interest: %f\n",a);

b = (p+(p*r));				  // compound interest
d = pow(b,t);
printf("compound interest: %f\n",d);
}
