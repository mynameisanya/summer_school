#include <stdio.h>
#include <stdlib.h>
#define N 5

double sum()
{
	char arr[N];
	double var1;
	double var2;
	double sum;

	printf("Enter first number: ");
	fgets(arr, N, stdin);
	var1 = atof(arr);
	
	printf("Enter second number: ");
	fgets(arr, N, stdin);
	var2 = atof(arr);

	sum = var1 + var2;
	printf("%f\n", sum);
}

