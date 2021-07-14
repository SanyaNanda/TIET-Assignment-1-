#include <stdio.h>
// distinguish  triangles into equivalent,isoceles and scalene
void main()
{
int a,b,c;
printf("Enter 3 sides of a triangle:\n");
scanf("%d %d %d",&a,&b,&c);
if(a==b && b==c && c==a)
{
printf("Equilateral triangle");
}
if(a==b || b==c || c==a)
{
printf("Isoceles Triangle");
}
else
{
printf("Scalene Triangle");
}
}
