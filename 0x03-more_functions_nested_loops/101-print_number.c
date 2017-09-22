#include "holberton.h"

/**
* print_number - prints an integer
* @n: int parameter
* Return: Always 0.
*/
void print_number(int n)
{
	unsigned int plc = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n - n - n;
	}

	while (n / plc >= 10)
	{
		plc *= 10;
	}

	while (plc >= 10)
	{
		_putchar((n / plc) + '0');
		n = n % plc;
		plc = plc / 10;
	}
	_putchar((n / plc) + '0');
}
