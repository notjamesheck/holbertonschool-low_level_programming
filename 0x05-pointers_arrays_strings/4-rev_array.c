#include "holberton.h"

/**
* reverse_array - Entry point
* @a: pointer to an int array
* @n: int
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	if (i % 2 != 0)
	{
		i += 1;
	}
	for (i = 0; i <= n; n--, i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
	}
}
