#include<stdio.h>
#include<math.h>
// Armstrong Number
void main()
{
int num,temp,count,e,f,sum=0,rem;
printf("enter a number:\n");
scanf("%d",&num);
e=num;
while(e!=0)  // conting the number of digits in the number
{
e/=10;
count++;
}

f=num;
while(f!=0)  // determining the sum
{
rem=f%10;
sum += pow(rem,count);
f/=10;

}

if(sum==num) //checking for armstrong number
	{
	printf(" is an armstrong number");
	}
else
	{
	printf("not an armstrong number");
	}
}
