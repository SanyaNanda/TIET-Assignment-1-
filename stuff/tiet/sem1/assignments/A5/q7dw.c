#include<stdio.h>
// using do while
void main()
{
int a,b,c;
int i = 0;
do

{

printf("Enter number %d",i);
scanf("%d",&a);
	if(a%2==0)
		{
		
		b+=a;
		
		}
		
	else
		{
		
		c+=a;
		}
i++;
	
}while(i<=10);
printf("Sum of Even numbers is %d\n",b);
printf("Sum of odd numbers is %d\n",c);
}
