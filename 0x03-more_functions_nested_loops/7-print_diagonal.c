#include "holberton.h"

/**
* print_diagonal - check the code for Holberton School students.
* @n: int parameter
* Return: Always 0.
*/
void print_diagonal(int n)
{
	int spac = 0, cnt;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		cnt = spac;
		while (cnt > 0)
		{
			_putchar(' ');
			cnt--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		spac++;
	}
}
