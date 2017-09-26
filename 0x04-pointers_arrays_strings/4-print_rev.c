#include "holberton.h"

/**
* print_rev - Entry point
* @str: char string pointer
* Return: print string to output in reserve
*/
void print_rev(char *str)
{
	int c;

	for (c = 0; *str; c++, str++)
	{}
	while (c >= 0)
	{
		str--;
		_putchar(*str);
		c--;
	}
	_putchar('\n');
}
