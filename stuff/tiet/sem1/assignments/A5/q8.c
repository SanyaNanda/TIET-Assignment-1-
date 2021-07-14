#include<stdio.h>
// code to count number of students whose marks lie in a particular range
void main()
{
int a,b=0,c;
for(int i=1;i<=10;i++)
{
printf("Enter number %d",i);
scanf("%d",&a);
if(a<0 || a>100)
{
printf("A wrong mark has been entered");
goto end;
}
if(45<=a && a<=65)
{
b+=1;
}
if(a<45 || a>65)
	continue;
end:;
}

printf("no of children = %d",b);
}

