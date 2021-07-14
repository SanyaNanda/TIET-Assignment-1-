#include<stdio.h>
int *build_array();
int main()
{
int *a;

a = build_array();
for(int i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
return 0;
}

int *build_array()
{
static int a[5];
for(int i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
return a;
}


