#include<stdio.h>
// determining gross salary using basic salary,HRA and DA
void main()
{
int a; // a = basic salary
void func(int,int,int);
printf("Enter the Basic Salary");
scanf("%d",&a);

	if(a<=10000)
		{
		func(a,20,80);
		goto end;
		}

	if(a<=20000)
		{
		func(a,25,90);
		goto end;
		}

	if(a>20000)
		{
		func(a,30,95);
		goto end;
		}
	end:;
	}


void func(int a,int HRA,int DA)
{
int d;// d = gross salary
d=a+(a*HRA)/100+(a*DA)/100;
printf("%d",d);
}

