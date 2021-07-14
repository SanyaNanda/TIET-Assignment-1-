#include<stdio.h>
int scan(int *a,int,int);
int print(int *c,int ,int);
int main()
{
int m,n,x,y;
printf("Enter the dimensions of matrix A");
scanf("%d %d", &m,&n);
printf("Enter the dimensions of matrix B");
scanf("%d %d", &x,&y);
int a[m][n], b[x][y] ,c[m][n];
int *p=a[m][n],*q=b[x][y];
scan(p,m,n);
scan(q,x,y);
if(m==x && n==y)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{	
		c[i][j] = a[i][j] + b[i][j];
		}
	}
int *r=c[m][n];
print(r,m,n);
}
else
{
printf("Sum cannot be determined, no of rows and columns should be equal for addition to be viable");
}
}

int scan(int *a,int m,int n)
{
for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
}

int print(int *c,int m, int n)
{
for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		printf("%d",c[i][j]);
		}
	}
}


