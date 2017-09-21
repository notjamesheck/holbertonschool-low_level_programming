#include "holberton.h"

/**
* print_square - check the code for Holberton School students.
* @size: int parameter
* Return: Always 0.
*/
void print_square(int size)
{
	int col, row = size;

	while (row > 0)
	{
		col = size;
		while (col > 0)
		{
			_putchar('#');
			col--;
		}
		row--;
		_putchar('\n');
	}
}
