#include<stdio.h>
void main()
{
int n,small;
printf("Enter the size of an array");
scanf("%d",&n);
int a[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
int *ptr;
ptr=a;
small=*ptr;
	for(int i=0;i<n;i++)
	{
		if(small>*(a+i))
		{
		small=*(a+i);
		}
	}
printf("smallest element in the array=%d",small);
}

