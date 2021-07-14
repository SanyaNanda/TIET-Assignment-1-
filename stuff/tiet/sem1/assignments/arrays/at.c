#include<stdio.h>
int main()
{
int m,n,x,y;
int a[m][n], b[x][y] , c[m][n];
printf("Enter the dimensions of matrix A");
scanf("%d %d", &m,&n);
for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
		
	}
printf("Enter the dimensions of matrix B");
scanf("%d %d", &x,&y);
for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
		scanf("%d",&b[i][j]);
		}
}
if(m==x && n==y)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{	
		c[i][j] = a[i][j] + b[i][j];
		printf("%d\t",c[i][j]);
		}
	printf("\n");
	}
}
else
{
printf("Sum can not be calculated as the no of rows and columns of the 2 matrices isnt equal.");
}
}


