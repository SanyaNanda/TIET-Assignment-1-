#include<stdio.h>
#include<math.h>
int check_even(int);
int check_one(int);
int main()
{
int n;
scanf("%d",&n);
int even= check_even(n);
int one = check_one(n);
printf("%d %d",even,one);
if(even==1 || one==1)
{
	printf("no");
}
else
{
	printf("yes");
}
return 0;
}

int check_even(int n)
{
int a=n,r,count=0;
while(a!=0)
{
r=a%10;
if(r%2==0)
{
	count++;
	break;
}
a/=10;
}
return count;
}

int check_one(int n)
{
int a=n,l;
while(a!=0)
{
a/=10;
l++;
}
int p=pow(10,l-1);
if(n%10==1 || n/p==1)
	return 1;
else
	return -1;
}








