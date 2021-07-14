#include<stdio.h>
#include<math.h>
// decimal to binary and vice versa
// similarly decimal to octal and vice versa can be done
void main()
{
int a,b,c,r,re,sum=0,count=0,x,y;
printf("Enter a decimal number");
scanf("%d",&a);
int n=a;
	while(n!=0)
	{
	b=n%2;
	r=r*10 +b;
	n/=2;
	}

int m=r;
	while(m!=0)
	{
	c=m%10;
	re=re*10 +c;
	m/=10;
	}
printf("Binary of the given number %d\n",re);

int k=re;
	while(k!=0)
	{
	k/=10;
	count++;
	}

	for(int l=0;l<count;l++)
	{
	x=re%10;
	y=x*pow(2,l);
	sum+=y;
	re/=10;
	}
printf("vice versa %d",sum);

}
