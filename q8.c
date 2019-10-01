#include<stdio.h>
// WAP to input temperature in celsius and convert it to fahrenhite and vice versa 
void main()
{
float C,F;
printf("Enter Temp in Celsius\n");
scanf("%f",&C);
F=((9*C)/5) + 32;
printf(" Temp in Fahrenhite is : %f\n",F);


fflush(stdin); //clears the standard input
printf("Enter Temp in Fahrenhite\n");
scanf("%f",&F);
C= (5*( F - 32))/9;
printf(" Temp in Celsius is : %f\n",C);
}
