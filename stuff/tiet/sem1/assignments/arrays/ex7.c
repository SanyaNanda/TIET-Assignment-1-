#include<stdio.h>
int bin(int a[],int,int,int);
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

int temp;
/* selection sort*/
for(int i=0;i<n-1;i++)
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}

int m;
printf("Enter the search number");
scanf("%d",&m);
if(bin(a,0,n,m)>-1)
	printf("%d is at position %d",m,bin(a,0,n,m)+1);
else
	printf("Not Found");
}

int bin(int a[],int l,int r,int m)
{
if(r>l)
{
int mid=(l+r)/2;
if(a[mid]==m)
	return mid;
if(a[mid]<m)
	bin(a,0,mid,m);
if(a[mid]>m)
	bin(a,mid,l,m);
}return -1;
}







