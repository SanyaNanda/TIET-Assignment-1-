#include<stdio.h>
void main()
{
int n;
printf("Enter the size of the array");
scanf("%d",&n);
int a[n];
int o[n], e[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
static int i = 0,j=0,k=0,count=0,count1=0;
if(i<n)
{
	if(a[i]%2==0)
	{
	e[j]=a[i];
	j++;
	count++;
	}
	else
	{
	o[k]=a[i];
	k++;
	count1++;
	}
i++;
}


for(int p=0;p<n;p++)
{
printf("%d",a[p]);
}
printf("\n");

for(int q=0;q<count;q++)
{
printf("%d",e[q]);
}
printf("\n");

for(int r=0;r<count1;r++)
{
printf("%d",o[r]);
}
printf("\n");
}


