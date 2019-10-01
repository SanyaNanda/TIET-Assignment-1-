#include<stdio.h>
#include<math.h>
// WAP to calculate area of a triangle using Heron's formula
void main()
{
float a,b,c,s,A,t;
t = 0.5;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
s = (a+b+c)/2; // calculating the semi-perimeter
A = (s)*(s-a)*(s-b)*(s-c); // equating to the heron's formula
A = pow(A,t);
printf("Area of the Triangle is : %f ",A);
}

