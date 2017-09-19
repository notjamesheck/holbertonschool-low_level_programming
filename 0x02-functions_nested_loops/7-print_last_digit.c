#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	r = r % 10;
	_putchar(r + '0');
	return (r);
}
