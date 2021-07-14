#include<stdio.h>
void main()
{
int a,b,n,result;
printf("Enter the number you want the fibonacci of");
scanf("%d",&n);
a = 0;
b = 1;
for (int i=3;i<=n;i++)
{
result= a+b;
a=b;
b=result;

}
printf("%d",result);
}
