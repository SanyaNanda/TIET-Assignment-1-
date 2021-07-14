#include<stdio.h>
#include<math.h>
void prime(int);
void armstrong(int);
void perfect(int);
void main()
{
 int num;
 printf("Enter the number\n");
 scanf("%d",&num);
 prime(num);
 armstrong(num);
 perfect(num);
}
void prime(int num)
{
 int c=0;
 for(int i=2;i<=num/2;i++)
 {
  if(num%i==0)
  c++;
 }
 if(c==0)
 printf("PRIME\n");
 else
 printf("NOT PRIME\n");
}
void armstrong(int num)
{int q,c=0;
 int p=q=num,r,sum=0;
 while(q!=0)
 {
  q=q/10;
  c++;
}
 while(num!=0)
 {
  r=num%10;
  num=num/10;
  sum=sum+pow(r,c);
 }
  if(sum==p)
  printf("ARMSTRONG\n");
  else
  printf("NOT ARMSTRONG\n");
}
void perfect(int num)
{
 int sum=0;
 for(int i=1;i<=num/2;i++)
 { if(num%i==0)
   sum=sum+i;
 }
 if(sum==num)
 printf("PERFECT\n");
 else
 printf("NOT PERFECT\n");
}

