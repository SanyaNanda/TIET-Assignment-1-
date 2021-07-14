#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,real,num,img,root1,root2;
printf("Enter the coefficients a,b,c:");
scanf("%f %f %f",&a,&b,&c);
if(a!=0)
{
d= b*b -(4*a*c);
printf("Discriminant= %f\n",d);
	if (d<0)
		{
		printf("Roots are Imaginary\n");
		real= -b/(2*a);
		d = -d;
		num= pow(d,0.5);
		img= num/(2*a);
		printf("Root 1 = %f +j %f\n",real,img);
		printf("Root 2 = %f -j %f\n",real,img);
		}
	else if(d==0)
		{
		printf("Roots are real and equal\n");
		root1=-b/(2*a);
		printf("Root 1 = Root 2 = %f\n",root1);
		}
	else
		{
		printf("Roots are real and unequal\n");
		root1= (-b + sqrt(d))/2*a;
		root2= (-b - sqrt(d))/2*a;
		printf("Root 1 = %f\n ",root1);
		printf("Root 2 = %f\n ",root2);
		}
}
else
{
printf("Equation is Linear\n");
}
}
