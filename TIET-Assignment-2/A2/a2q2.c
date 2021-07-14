#include<stdio.h>
// compute the total price
void main()
{
int a,b,c,d,e,f,g,h;
a=10;	// cost per unit pen
b=5;	// cost per unit pencil
c=2;	// cost per unit sharpener
d=a*2;	// total cost of pens bought
e=b*3;	// total cost of pencils bought
f=c;	// total cost of sharpeners bought
g= a+b+c;// total price
h=d+e+f;
printf("********LIST OF ITEMS***********\n");
printf("item             price              total\n");
printf("----------------------------------------------\n");
printf("pen               %d                  %d\n",a,d);
printf("pencil            %d                  %d\n",b,e);
printf("sharpener         %d                  %d\n",c,f);
printf("----------------------------------------------\n");
printf("grand total:      %d                  %d\n",g,h);
}
