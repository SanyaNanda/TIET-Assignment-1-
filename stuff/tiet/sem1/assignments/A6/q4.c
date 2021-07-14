#include<stdio.h>
// printing tables from 1 to 5
void main()
{int j=1;
do
{int i=1;
do
{
printf("%d\t",i*j);
i++;
}while(i<=10);
printf("\n");
j++;
}while(j<=5);
}
