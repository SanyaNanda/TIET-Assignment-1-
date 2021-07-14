#include<stdio.h>
// code to spell the numbers scanned
//WAP to accept a number and print all its digits in words using Switch statement.
void func(int);
void main()
{
int a,count=0,rem,rev=0;
printf("Enter a number");
scanf("%d",&a);
int n;
n=a;
	while(n != 0)
	{
	n/=10;
	count++;
	}

int m=a;
	while(m!=0)
	{
	rem=m%10;
	rev=rev*10 + rem;
	m/=10;
	}

int p=rev;
	while(p!=0)
	{
	rem=p%10;
	func(rem);
	p/=10;
	}
}

void func(int i)
{
switch(i)
	{
	case 0:
	printf("zero");
	break;
	
	case 1:
	printf("one");
	break;

	case 2:
	printf("two");
	break;

	case 3:
	printf("three");
	break;

	case 4:
	printf("four");
	break;

	case 5:
	printf("five");
	break;

	case 6:
	printf("six");
	break;

	case 7:
	printf("seven");
	break;

	case 8:
	printf("eight");
	break;

	case 9:
	printf("nine");
	break;

	default:
	printf("Invalid");
	}
}
