#include<stdio.h>
//WAP to compute the gross salary of an employee
void main()
{
int a,b,c,d,e;
printf("please input your basic pay:\n");
scanf("%d",&a);
printf("basic pay = %d\n",a);
b=((50*a/100)); // dearness allowance
c=((20*a/100)); // house rent allowance 
d=((10*a/100)); // vehicle allowance
e=a+b+c+d; 	// summation of basic pay and all the allowances
printf("gross pay:%d",e);
}
