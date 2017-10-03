#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - Entry point
* @a: pointer to a char array
* @size: size of array
* Return: sum of array contents
*/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;
	int j = ((size * size) - 1) - (size - 1);

	while (i  < (size * size))
	{
		sum1 += a[i];
		sum2 += a[j];
		i += size + 1;
		j -= size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
