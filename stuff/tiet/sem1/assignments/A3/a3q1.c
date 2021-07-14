#include<stdio.h>
//input: 123

//output:123
//	 23
//	 3
void main()
{
int a;
printf("enter a three digit number");
scanf("%d",&a);
printf("%d\n",a);
a=a%100;
printf("%d\n",a);
a=a%10;
printf("%d\n",a);
}
