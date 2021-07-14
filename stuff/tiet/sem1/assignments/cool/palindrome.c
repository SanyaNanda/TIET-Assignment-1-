#include<stdio.h>
int main()
{
int num,temp=0,rem,R=0;
printf("Enter a Number\n");
scanf("%d",&num);
temp=num;


	while(temp!=0)
	{

	rem=temp%10;
	R=(R*10) + rem;
	temp/=10;

	}
	if(num==R)
		printf("%d is Palindrome",num);
		
	else
		printf("%d is Not Palindrome",num);
				
	

}
