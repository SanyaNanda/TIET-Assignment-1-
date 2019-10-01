#include<stdio.h>
#include<string.h>
// WAP that will accept an integer, a decimal number, a character and a string from the keyboard and display them one per line.
void main()
{
int a;
float b;
char x;
char d[20];
printf("Enter an integer:\n");
scanf("%d",&a);
printf("The Integer is: %d\n",a);

printf("Enter a float:\n");
scanf("%f",&b);
printf("The Float is: %f\n",b);

printf("Enter a string:\n");
scanf("%s",d);
printf("The string is: %s\n",d);

printf("Enter a char:\n");
scanf(" %c",&x);
printf("The char is:%c",x);
}

