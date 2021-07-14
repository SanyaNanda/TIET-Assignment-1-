#include<stdio.h>
//computing electricity bill of any customer depending upon consumption of power in watts
void main()
{
int a;
char d[20];
float b,c;
printf("Enter customer ID\n");
scanf("%f",&a);

printf("Enter customer name\n");
scanf("%s",&d);

printf("Enter customer consumption in watts\n");
scanf("%f",&b);


if(b<=199)
{
c=b*1.2;
}

if(200<=b && b<400)
{
c=b*1.5;
}

if(400<=b && b<600)
{
c=(b*1.8) + (b*0.15);
}

if(600<=b)
{
c=(b*2) + (b*0.15);
}

printf("Total Bill Amount:%f",c);
}
