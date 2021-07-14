#include<stdio.h>
//Merging of arrays
void main()
{
int a,b;
printf("Enter the number of elements in A\n");
scanf("%d",&a);
int A[a];
	for(int i=0;i<a;i++)
	{
	scanf("%d",&A[i]);
	}
printf("Enter the number of elements in B\n");
scanf("%d",&b);
int B[b];
	for(int i=0;i<b;i++)
	{
	scanf("%d",&B[i]);
	}
int c=a+b;
int C[c];
for(int i=0;i<a;i++)
	{
	*(C+i)=*(A+i);
	printf("%d\t",C[i]);
	}
for(int j=a;j<c;j++)
	{
	*(C+j)=B[j-a];
	printf("%d\t",C[j]);
	}
}
