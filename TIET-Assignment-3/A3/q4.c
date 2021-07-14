#include<stdio.h>
// input three numeric variables and print the largest and smallest among them using conditional operator
void main()
{
int a,b,c,s,m;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(s=a>b?a:(b>c)?b:c);
	{
	printf("largest number is:%d\n",s);
	}
if(m=a<b?a:b<c?b:c);
	{
	printf("smallest number is: %d",m);
	}
}

