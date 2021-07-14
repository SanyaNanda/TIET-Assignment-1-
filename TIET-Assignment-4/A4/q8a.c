#include<stdio.h>
// determine whether a polygon is a triangle using the angles
void main()
{
int a,b,c;
printf("Enter the three angles");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a>= 0 && b>=0 && c>=0)
{
	if(a+b+c==180)
	{
	printf("Triangle");
	}
	else
	{
	printf("Not Triangle");
	}
}
else
	{
	printf("Not Triangle");
	}
}
