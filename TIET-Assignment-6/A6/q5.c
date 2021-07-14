#include<stdio.h>
// code for basic mathematical operations using functions
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
void main()
{
int a,b,c;
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
printf("1:sum\n2:sub\n3:mul\n4:div\n");
printf("Enter the number code of the function");
scanf("%d",&c);
switch(c)
{	case 1:
		printf("sum=%d",sum(a,b));
		break;
	case 2:
		printf("sub=%d",sub(a,b));
		break;
	case 3:
		printf("mul=%d",mul(a,b));
		break;
	case 4:
		printf("div=%d",div(a,b));
		break;
	default:
		printf("Enter a valid number coded for mathematical operation");
		break;
}
}


int sum(int a,int b)
{
return a+b;
}

int sub(int a,int b)
{
return a-b;
}

int mul(int a,int b)
{
return a*b;
}

int div(int a,int b)
{
return a/b;
}










