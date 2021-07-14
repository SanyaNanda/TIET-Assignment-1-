#include<stdio.h>
void swap(int *a, int*b);
void main()
{
int m,n;
printf("Enter 2 integers");
scanf("%d %d",&m,&n);
printf("m= %d\tn=%d\n",m,n);
swap(&m,&n);
printf("m= %d\tn=%d\n",m,n);
}

void swap(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
