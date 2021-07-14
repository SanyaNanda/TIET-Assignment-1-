#include<stdio.h>
int m,n;
void main()
{
printf("Enter the number of students and subjects");
scanf("%d %d",&n,&m);
int a[n][m];
void print(int a[n][m],int n,int m);
for(int i =0;i<n;i++)
{
for(int j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
print(a,n,m);
} 
void print(int a[n][m],int n,int m)
{
for(int i =0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
} 
}
