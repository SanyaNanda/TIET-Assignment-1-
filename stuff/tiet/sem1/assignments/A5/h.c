#include<stdio.h>
#include<math.h>
//decimal to binary
// and vice versa
int main()
{
int n;
scanf("%d",&n);
int d=n,count=0;
while(d!=0)
{
d/=10;
count++;
}
int a=n;
int b[count];
int temp =0;
int j=0;
for(int i = 0; i < count; i++)
{
temp=n%16;
b[i] = temp;
n/=16;
}
char c[count];
for(int i = 0; i < count; i++)
{

	if(b[i]<10 && b[i]>=0)
	{
	c[i] = (char)(b[i] +48);
	}
	else
	{
	c[i] = (char)(b[i] +55);
	}
}
printf("decimal no in hexadecimal is\n");
for(int i = count-1; i>=0; i--)
{
printf("%c",c[i]);
}
printf("\n");
int e[count];
for(int i = 0; i < count; i++)
{


if(c[i]<=57 && c[i]>=48)
	{
	e[i] = (c[i] -48);
	}
	else
	{
	e[i] = (c[i] -55);
	}
//printf("%d\t",e[i]);
}
int sum=0;
for(int i = 0; i < count; i++)
{
sum+= e[i]*pow(16,i);
}
printf("Vice versa=%d\n",sum);
}






