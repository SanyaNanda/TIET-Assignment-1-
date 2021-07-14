#include<stdio.h>
#include<ctype.h>
// if the input is an upper case alphabet report so.
// if it is lowercase report so and determine whether it is vowel or consonant
// if it is a digit check its divisibility with 2 and 5
void main()
{
char a;
scanf("%c",&a);
int c;
c=a;
printf("%d\n",c);
if(65<=c && c<=90) // ASCII range for uppercase alphabets
	{
	printf("uppercase\n");
	}

if(97<=c && c<=122)// ASCII range for lowercase alphabets
	{
	if(c==97 || c==101 || c==105 || c==111 || c==117)
		{
		printf("lower case and vowel\n");
		
		}
	else
		{
		printf("lowercase and consonant\n");
		}
	}
	
if(48<=c && c<=57)// ASCII for digits 0-9
	{
	if(c%2==0 && c%5==0)
		{
		printf("divisible by 2 and 5\n");
		}
	else
		{
		printf("not divisible\n");
		}
	}
}




	
