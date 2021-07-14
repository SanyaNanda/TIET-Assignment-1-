#include<stdio.h>
//using for loop
void main()
{
int a,b,c;
for(int i=1;i<=10;i++)
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
	
}
printf("Sum of Even numbers is %d\n",b);
printf("Sum of odd numbers is %d\n",c);
}



