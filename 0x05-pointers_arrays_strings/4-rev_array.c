#include "holberton.h"

/**
* reverse_array - Entry point
* @a: pointer to an int array
* @n: int
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 1;
	int *begin = a;
	int *end = a;
	char temp;

	for (i = 1; i <= n - 1; end++, i++)
	{}
	for (i = 1; i <= n / 2; end--, begin++, i++)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;
	}
}
