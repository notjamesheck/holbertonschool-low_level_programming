#include <stdio.h>

/**
* print_array - Entry point
* @a: array pointer
* @n: int parameter
* Return: void, print array
*/
void print_array(int *a, int n)
{
	int c = 0;

	while (c < n)
	{
		printf("%d", *(a + c));

		if (c + 1 != n)
		{
			printf(", ");
		}
		c++;
	}
	printf("\n");
}
