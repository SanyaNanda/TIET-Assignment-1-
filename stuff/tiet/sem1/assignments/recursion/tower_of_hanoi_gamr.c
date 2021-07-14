#include<stdio.h>
void hanoi(int n,char from,char to,char aux);
int main()
{
int n;
scanf("%d",&n);
hanoi(n,'A','C','B');
return 0;
}

void hanoi(int n,char from,char to,char aux)
{
if(n==1)
{
printf("Move disk 1 from rod %c to rod %c\n",from,to);
return;
}
hanoi(n-1,from,aux,to);
printf("Move disk %d from rod %c to rod %c\n",n,from,to);
hanoi(n-1,aux,to,from);
}	
