#include<stdio.h>
// inserting an element in an array at a given position
void main()
{
int n;
printf("Enter the number of elements\n");
scanf("%d",&n);
int a[n+1];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}

int item,pos;
printf("Enter the item and its position\n");
scanf("%d %d",&item,&pos);
	for(int k=n;k>=pos;k--)
	{
	a[k]=a[k-1];
	}
a[pos-1]=item;

	for(int i=0;i<=n;i++)
	{
	printf("%d\t",a[i]);
	}
}
