#include<stdio.h>
int power(int a, int b);
void main()
{
int a,b,p;
printf("Enter a number and the power of the number");
scanf("%d %d",&a,&b);
p=power(a,b);
printf("%d",p);
}



int power(int a, int b)
{int prod=1;
	for (int i=b;i>=1;i--)
	{
	prod*=a;
	
	}
return prod;

}
