#include<stdio.h>
#include"student_arr.h"
# define N 20
void display(int p[],int);
int total_marks(int p[],int n);
int min(int p[]);
int max(int p[]);
int count(int p[], int avg);
void main()
{
int n;
printf("Enter the number of inputs");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Displaying marks...\n");
display(a,n);
printf("\n");
printf("total_marks=%d\n",total_marks(a,n));
int avg=total_marks(a,n)/n;
printf("Average_marks=%d\n",avg);
printf("min=%d\nmax=%d\n",min(a),max(a));
printf("No of students below average marks are %d\n",count(a,avg));
}

void display(int p[],int n)
{
static int i=0;
if(i<n)
{
printf("%d\t",*(p+i));
i++;
display(p,n);
}
}

int total_marks(int p[],int n)
{
static int i=0,sum=0,avg=0;
if(i<n)
{
sum += *(p+i);
i++;
total_marks(p,n);
}
return sum;
}

int min(int p[])
{
static int m=100,i=0;
if(i<N)
{
if(m > *(p+i))
	{
	m=*(p+i);
	i++;
	min(p);
	}
return m;
}
}

int max(int p[])
{
static int m=0,i=0;
if(i<N)
{
	if(m < *(p+i))
		{
		m=*(p+i);
		
		i++;
		max(p);
		}
	return m;
}
}

int count(int p[], int avg)
{
static int i=0,c=0;
if(i<N)
{
if(*p+i<avg)
	{
	c++;
	i++;
	count(p,avg);
	}
return c;
}
}


