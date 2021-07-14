#include<stdio.h>
// code to compute area and perimeter of diff shapes
float sq(float);
float rect(float,float);
float c(float);
void main()
{
int a;
float s,b,d,r;
printf("1:square\n2:rectangle\n3:circle");
printf("Enter the code of the shape whose area and perimeter you want to calculate");
scanf("%d",&a);
switch(a)
{
	case 1:
		sq(s);
		break;
	case 2:
		rect(b,d);
		break;
	case 3:
		c(r);
		break;
	default:
		printf("Enter a valid number");
		break;
}
}

float sq(float s)
{
int a,p;
printf("Enter the side length");
scanf("%f",&s);
a=s*s;
p=4*s;
printf("area=%f\nperimeter=%f",a,p);
}

float rect(float b,float d)
{
float a,p;
printf("Enter the length and breadth");
scanf("%f %f",&d,&b);
a=d*b;
p=2*d*b;
printf("area=%f\nperimeter=%f",a,p);
}

float c(float r)
{
float a,p;
printf("Enter the radius");
scanf("%f",&r);
a=3.14*r*r;
p=2*3.14*r;
printf("area=%f\nperimeter=%f",a,p);
}
