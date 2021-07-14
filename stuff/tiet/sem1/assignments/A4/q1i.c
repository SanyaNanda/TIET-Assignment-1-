#include<stdio.h>
// determining Largest integer using if-else statements 
void main()
{
int a,b,c;
printf("enter three numbers:\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b)
	{
	if(a>c)
		{
		printf("greatest number is :%d",a);
		}
	if(c>a)
		{
		printf("greatest number is :%d",c);
		}
	goto end;
	}
if(b>a)
	{
	if(b>c)
		{
		printf("greatest number is :%d",b);
		}
	if(c>b)
		{
		printf("greatest number is :%d",c);
		}
	goto end;
	}
if(c>b)
	{
	if(a>c)
		{
		printf("greatest number is :%d",a);
		}
	if(c>a)
		{
		printf("greatest number is :%d",c);
		}
	goto end;
	}
end: ;
}


	
