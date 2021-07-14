#include<stdio.h>
// deleting elements of an array
void main()
{
int n;
printf("Enter the number of elements\n");
scanf("%d",&n);
int a[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}

int pos;
printf("Enter position to be deleted");
scanf("%d",&pos);
for(int i=pos-1;i<n-1;i++)
	{
	a[i]=a[i+1];
	}
n--;
for(int i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
