#include "holberton.h"

/**
* print_alphabet_x10 - Entry Point
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
