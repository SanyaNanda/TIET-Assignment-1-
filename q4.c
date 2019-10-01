#include<stdio.h>
#include<string.h>
//WAP to format your mailing address
void main()
{
char a[20];
char b[100];
char c[20];
char d[20];
printf(" Enter name\n house\n city\n state,pincode");
scanf(" %s%s%s%s",&a,&b,&c,&d);

printf("Name                    :      %s\n",a);
printf("House No,Street         :      %s\n",b);
printf("City                    :      %s\n",c);
printf("State,Pin Code          :      %s\n",d);
}
