#include <stdio.h>


int main()
{
	int a = 5;
	int b = 7;
	int *ptr1;
	int **ptr2;

	ptr1 = &a;
	ptr2 = &ptr1;

	*ptr2 = *ptr2 + 1;
	//*ptr2 = ptr1 + 1;
	
	printf("%p\n", &b);
	printf("%d\n", *ptr1);
	printf("%p\n", ptr1);
}
