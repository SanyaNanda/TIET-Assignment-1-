#include<stdio.h>
// input any floating number with 3 digits before the decimal
// example- input: 356.78
//	    output:  6
//		    56
//		   356
void main()
{
float a;
int b,c,d,e;
printf("Enter a floating number");
scanf("%f",&a);
b=a;
c=b%10;
d=(b%100);
e=b;
printf(" \n%d\n %d\n %d\n",c,d,e);
}
