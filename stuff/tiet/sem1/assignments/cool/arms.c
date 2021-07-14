#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,count=0,sum=0,rem;
printf("Enter a Number\n");
scanf("%d",&a);
c=a;
d=a;
while(c!=0)
	{
	c/=10;
	count++;
	}
b=count;
printf("%d\n",b);

while(d!=0)
	{
	rem=d%10;
	sum += pow(rem,b);
	d/=10;
	
	}
	
	printf("%d\n",sum);
	if(a==sum)
		{
		printf("Armstrong Number");
		}
	else
		{
		printf("Not Armstrong");
		}
}
