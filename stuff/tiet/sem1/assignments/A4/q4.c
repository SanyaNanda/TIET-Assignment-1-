#include<stdio.h>
// output suitable description with respect to the temperature input by the user in centigrade
void main()
{
int temp;
printf("Enter Temp in Centigrade:");
scanf("%d",&temp);


	if(temp<=0)
		{
		printf("Freezing weather");
		}
	if(temp>0 && temp<=10)
		{
		printf("Very Cold Weather");
		}
	if(temp>10 && temp<=20)
		{
		printf("Cold weather");
		}
	if(temp>20 && temp<=30)
		{
		printf("Normal temperature");
		}
	if(temp>30 && temp<=40)
		{
		printf("Hot");
		}
	if(temp>40)
		{
		printf("Very Hot");
		}
}

