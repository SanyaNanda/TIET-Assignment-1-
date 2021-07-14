#include<stdio.h>
// accept a grade and output the corresponding description using switch
void main()
{
char grade;
scanf("%c", &grade);
switch(grade)
	{
	case 'E':
		printf("\nExcellent");
		break;
	case 'V':
		printf("\nVery Good");
		break;
	case 'G':
		printf("\nGood");
		break;
	case 'A':
		printf("\nAverage");
		break;
	case 'F':
		printf("\nFail");
		break;
	default:
		printf("\nInvalid");
		break;
	}
}

