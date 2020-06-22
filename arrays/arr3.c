#include <stdio.h>
#define N 4


int main()
{
	:int arr[N];
	int i;

	for (i = 0; i <= N; i++)
	{
		arr[i] = i + 1;
		printf("%d", arr[i]);
	}

	printf("\n");

	for (i = 0; i <= N; i++)
	{
		printf("%d", arr[N-i]);
	}

	printf("\n");


}
