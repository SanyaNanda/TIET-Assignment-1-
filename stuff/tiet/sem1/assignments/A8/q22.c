#include<stdio.h>
int *s(int*,int*,int*,int,int*,int*);
void main()
{
int n,count=0,count1=0;
printf("Enter the size of the array");
scanf("%d",&n);
int a[n];
int o[n], e[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int *x,*y;
x=&count;
y=&count1;
s(a,e,o,n,x,y);
for(int p=0;p<n;p++)
{
printf("%d",a[p]);
}
printf("\n");

for(int q=0;q<*x;q++)
{
printf("%d",e[q]);
}
printf("\n");

for(int r=0;r<*y;r++)
{
printf("%d",o[r]);
}
printf("\n");
}



int *s(int*a,int*e,int*o,int n,int* x,int*y)
{
static int i = 0,j=0,k=0;
if(i<n)
{
	if(a[i]%2==0)
	{
	e[j]=a[i];
	j++;
	*x++;
	i++;
	s(a,e,o,n,x,y);
	}
	else
	{
	o[k]=a[i];
	k++;
	*y++;
	i++;	
	s(a,e,o,n,x,y);
	}return a,e,o,x,y;

}
}
