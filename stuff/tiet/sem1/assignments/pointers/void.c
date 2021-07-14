#include<stdio.h>
// ude of void pointer illustrarted
void main()
{
int a;
float b;
void *ptr;
printf("Enter aninteger and a floating point");
scanf("%d %f",&a,&b);
ptr=&a;
printf("a is %d\n",*(int *)ptr);
ptr=&b;
printf("b is %f\n",*(float *)ptr);
}


