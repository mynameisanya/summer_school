#include <stdio.h>
#define N 3
#define M 3

int main()
{
	int arr[N][M];
	int i;
	int j;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			{
				if (j%M == 0)
					printf("\n");
				
				if (i+j >= M-1)
				{
				arr[i][j] = 1;
				printf("%d", arr[i][j]);
				}
				else 
				{
					arr[i][j] = 0;
					printf("%d", arr[i][j]);
				}
			}
	}

}
