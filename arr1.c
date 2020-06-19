#include <stdio.h>
#define N 9

int main ()
{
	int arr[N];
	int i;

	for (i = 1; i <= N; i++)
	{
	arr[i] = i;
	printf("%d", arr[i]);

	if(i % 3 == 0)
		printf("\n");
	}
}
