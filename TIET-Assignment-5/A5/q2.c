#include<stdio.h>
// Marks to Grades using switch function
void main()
{
int a,b;
printf("Enter you marks");
scanf("%d",&a);
b=a/10;
switch(b)
	{
	case 10:
		printf("A Grade\n");
		break;
	case 9:
		printf("B Grade\n");
		break;
	case 8:
		printf("B Grade\n");
		break;
	case 7:
		printf("B Grade\n");
		break;
	case 6:
		printf("B Grade\n");
		break;
	case 5:
		printf("C Grade\n");
		break;
	case 4:
		printf("D Grade\n");
		break;
	case 3:
		printf("D Grade\n");
		break;
	case 2:
		printf("F Grade\n");
		break;
	case 1:
		printf("F Grade\n");
		break;
	case 0:
		printf("F Grade\n");
		break;
	default:
		printf("Invalid");
	}
}
