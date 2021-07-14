#include<stdio.h>
// to compute gross salary using user defined functions
void gross_salary(float,float,float,float);
void main()
{
float basic_pay,gross_sal;
printf("Enter your salary");
scanf("%f",&basic_pay);
float da, hra;
da= 0.20*basic_pay;
hra= 0.10*basic_pay;
gross_salary(basic_pay,da,hra,gross_sal);
}

void gross_salary(float a,float b, float c, float d)
{
d=a+b+c;
printf("The gross salary is %f",d);
}
