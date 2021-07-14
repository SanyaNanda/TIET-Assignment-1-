#include<stdio.h>
#include<math.h>
// determining sine and cosine values of angles 
void main()
{
float x,a,b,rad;
printf("Enter angle in degrees:");
scanf("%f",&x);
rad=(3.14/180)*x;
printf("value of angle in radians:%f\n",rad);
a=sin(rad);
b=cos(rad);
printf("sin(rad)= %0.2f \n cos(rad)= %0.2f ", a,b);
}



