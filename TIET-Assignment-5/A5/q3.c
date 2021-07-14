#include<stdio.h>
#include<ctype.h>
// Example of Switch
void main()
{
char a;
printf("Enter a character\n");
scanf("%c",&a);
a=toupper(a);
printf("%c\n",a);
switch(a)
	{
	case 'M':
		printf("March and May");
		break;
	case 'J':
		printf("January,June and July");
		break;
	case 'F':
		printf("Feburary");
		break;
	case 'A':
		printf("April, August");
		break;
	case 'S':
		printf("September");
		break;
	case 'O':
		printf("October");
		break;
	case 'N':
		printf("November");
		break;
	case 'D':
		printf("December");
		break;
		
	default:
		printf("Invalid");
		break;
	}
}
