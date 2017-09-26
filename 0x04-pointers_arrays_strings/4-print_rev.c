#include "holberton.h"

/**
* print_rev - Entry point
* @str: char string pointer
* Return: print string to output in reserve
*/
void print_rev(char *str)
{
	int c;

	for (c = 0; *(str + c); c++)
	{}
	c = c - 1;
	while (c >= 0)
	{
		_putchar(*(str + c));
		c--;
	}
	_putchar('\n');
}
