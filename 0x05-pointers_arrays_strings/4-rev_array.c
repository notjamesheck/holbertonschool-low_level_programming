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
	char temp;
	n -= 1;

	for (i = 0; i <= n / 2; n--, i++)
	{
		temp = begin[i];
		begin[i] = end[n];
		end[n] = temp;
	}
}
