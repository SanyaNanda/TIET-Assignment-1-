#include<stdio.h>
int main()
{
int num,temp,rem,R=0;
printf("Enter a Number\n");
scanf("%d",&num);


	do
	{
	rem=num%10;
	R= R*10 + rem;
	
	num/=10;

	}while(num!=0);
	printf("Reverse = %d",R);
	
	
	

}
