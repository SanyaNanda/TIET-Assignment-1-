#include<stdio.h>
void main()
{
int n,d,avg,c=0;
printf("Enter the number of elements");
scanf("%d",&n);
d=n;
while(d>=1)
{
int a;
scanf("%d",&a);
c=c+a;
d--;
}
printf("%d",c);
avg=c/n;
printf("Average is %d",avg);
}
