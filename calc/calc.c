#include <stdio.h>
#include <stdlib.h>
#include "calc_sum.h"
#include "calc_sub.h"
#include "calc_multi.h"
#include "calc_division.h"
#define N 5

double sum();
double sub();
double multi();
double division();

//в функции main находится меню
int main ()
{
	char arr[N];
	int var;

	printf("Enter 1 if you want to get summa\n");
	printf("Enter 2 if you want to get subtraction\n");
	printf("Enter 3 if you want to get multiplication\n");
	printf("Enter 4 if you want to get division\n");

	fgets(arr, N, stdin);
	var = atoi (arr);

	switch (var)
	{
		case 1:
			sum();
			break;
		case 2:
			sub();
			break;
		case 3:
			multi();
			break;
		case 4:
			division();
			break;
		default:
			printf("Error! Enter suitable number\n");
	}

}
