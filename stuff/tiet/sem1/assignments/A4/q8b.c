#include <stdio.h>
// determine if a polygon is a triangle using its sides
void main()
{
int a,b,c;
printf("Enter 3 sides of a triangle:\n");
scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b)
	{
	printf("Triangle");
	}
	else
	{
	printf("Not Triangle");
	}
}
