gedit#include<stdio.h>
// WAP a program that takes three  numerical input variables and compute d
int main()
{
float a,b,c,d;
printf("enter 3 numbers");
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
d=((a+b)/(b-c)); //the function to be performed
printf(" after computation we get:%f",d);
}
