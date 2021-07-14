#include<stdio.h>
#include<string.h>
void main()
{
int bit,i,n;
unsigned long decimal=0;
char binary[33];
printf("Enter the binary");
scanf("%32s",binary);
n = strlen(binary);
	for(i=0;i<n;i++)
	{
	bit = binary[i] - '0';
	decimal = (decimal<<1) + bit;
	}
printf("The Decimal Equivalent of the binary number %s is %lu\n",binary,decimal);
}
