#include<stdio.h>
// count the even numbers input
int count_even(int a);
static int n;
static int count=0;
int main()
{
int *p;
printf("Enter total numbers to be scanned");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
p=&a[i];
count_even(*p);
}

printf("count of even numbers=%d",count);
}

int count_even(int a)
{
if(a%2==0)
	count++;
}

