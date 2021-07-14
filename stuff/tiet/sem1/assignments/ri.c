#include<stdio.h>
#include<math.h>
void main()
{
int n;
printf("integer");
scanf("%d",&n);
int a=n;
for(int i=3;i>0;i--)
{
int c=pow(10,i);
int b=a%c;
printf("%d\n",b);
}
}


