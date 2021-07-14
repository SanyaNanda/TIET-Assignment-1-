#include<stdio.h>
// eligibility of admission of a student for a professional institute based on the following criteria
void main()
{
int a,b,c;
printf("Enter marks in mathematics");
scanf("%d",&a);

printf("Enter marks in physics");
scanf("%d",&b);

printf("Enter marks in chemistry");
scanf("%d",&c);

	if (a>=65 && b>=55 && c>=60 && a+b+c>=190 && a+c>=130)
		{
		printf("the candidate is eligible for admission");
		}
	else
		{
		printf("Ineligible for admission");
		}
}
