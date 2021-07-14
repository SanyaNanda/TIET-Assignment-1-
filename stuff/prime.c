#include<stdio.h>
void main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
for(int j=2;j<n/2;j++)
{
if(n%j==0)
{
printf("Not Prime");
goto end;
}
else
{
printf("Prime");
goto end;
}
}
end:;
}
