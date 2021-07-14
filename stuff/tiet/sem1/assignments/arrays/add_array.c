#include<stdio.h>
int add_array(int *a,int n);
int main()
{
int b[5] = {1,2,3,4,5};
printf("sum = %d",add_array(b,5));
}

int add_array(int *a, int n)
{
int sum=0;
for(int i=0;i<5;i++)
{
sum+=*(a+i);
}
return sum;
}
