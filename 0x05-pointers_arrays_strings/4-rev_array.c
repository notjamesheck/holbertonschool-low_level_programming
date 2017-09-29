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
	int *begin = a;
	int *end = a;
	int temp = 0;

	for (i = 0; i <= n / 2; n--, i++)
	{
		temp = end[n - 1];
		end[n - 1] = begin[i];
		begin[i] = temp;
	}
}
