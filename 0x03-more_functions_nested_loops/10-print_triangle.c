#include "holberton.h"

/**
* print_triangle - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_triangle(int size)
{
	int row, h, s;

	if (size == 0)
	{
		_putchar('\n');
	}
	else

	for (row = size; row > 0; --row, _putchar('\n'))
	{
		s = row - 1;
		while (s > 0)
		{
			_putchar(' ');
			s--;
		}

		h = row;
		while (h <= size)
		{
			_putchar('#');
			h++;
		}
	}
}
