#include<stdio.h>
int search(int *p,int,int);
void main()
{
int n;
printf("Enter the size of the array");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int s;
printf("Enter the element to be searched");
scanf("%d",&s);
int p=search(a,n,s);
if(p>-1)
{	printf("found at %d",p);
}
else
{
printf("not Found");
}
}

int search(int *p,int n,int s)
{
for(int i=0;i<n;i++) if(p[i]==s) return i;
return -1;
}

