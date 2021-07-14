#include<stdio.h>
int fact(int n);
void main()
{
int n,f;
printf("Enter the number you want the factorial of");
scanf("%d",&n);
f=fact(n);
printf("%d",f);
}



int fact(int n)
{int b=1;
	for (int i=n;i>=1;i--)
	{
	b=b*i;
	
	}
return b;

}
