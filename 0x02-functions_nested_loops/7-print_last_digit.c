#include "holberton.h"

/**
* print_last_digit - check the code for Holberton School students.
* @r: int parameter
* Return: Always 0.
*/
int print_last_digit(int r)
{
	int i = r % 10;

	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
