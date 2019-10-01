#include<stdio.h>
#include<math.h>
// WAP to calculate diameter, area circumference of a circle
void main()
{
float a =2,b=2; //(x1=a,y1=b)
float c=5,d=6;  //(x2=c,y2=d)
float t=0.5,m,f,e,r,A,C;
m= a-c;		// calculating the diameter using distance formula
m = pow(m,2);
e= b-d;
e=pow(e,2);
f = e+m;
f=pow(f,t);
r=f/2;		// determining the radius
A=(3.14)*r*r;   // calculating  the area of the circle
C=2*3.14*r;	// calculating the perimeter of the circle
printf("Area : %f " ,A);
printf("Circumference : %f ",C);
}
