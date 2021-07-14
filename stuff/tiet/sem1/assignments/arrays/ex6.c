#include<stdio.h>
void main()
{
int n;
printf("Enter the number of elements");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

int m,index;
printf("Enter the search number");
scanf("%d",&m);

for(int i=0;i<n;i++)
{
if(a[i]==m)
{
	index=i;
	break;
}
else
{	
	index=-1;
}
}

if(index>-1)
	printf("%d found at position %d",m,index+1);
else
	printf("%d not found in the array",m);

}


