#include <stdio.h>
#define N 5


int sum ()
{
	char arr[N];	
	printf("Enter two numbers: ");
	fgets(arr, N, stdin);
	printf("%d\n", N);
}
/*
double sub ()
{
	double a;
	double b;
	
	printf("Enter two numbers: ");
	scanf("%lf%lf", &a, &b);
	printf("%f\n", a - b);
}

double mult ()
{
	double a;
	double b;
	
	printf("Enter two numbers: ");
	scanf("%lf%lf", &a, &b);
	printf("%f\n", a * b);
}


double div ()
{
	double a;
	double b;
	
	printf("Enter two numbers: ");
	scanf("%lf%lf", &a, &b);
	printf("%f\n", a / b);
}*/

int main()
{
	char arr[N];

	printf("Enter number 1 if you want to get sum\n");
	printf("Enter number 2 if you want to get subtraction\n");
	printf("Enter number 3 if you want to get multiplication\n");
	printf("Enter number 4 if you want to get division\n");

	fgets(arr, sizeof(arr), stdin);
	printf("%s\n", arr);
	
//	switch ()
//	{
//		case 1:
//			sum();
//			break;
//		case 2:
//			sub();
//			break;
//		case 3:
//			mult();
//			break;
//		case 4: 
//			div();
//			break;
//	
//		default:
//			printf ("Enter a suitable number!\n");
//	}

	return 0;
}
