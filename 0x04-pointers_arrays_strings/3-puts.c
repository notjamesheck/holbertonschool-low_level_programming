#include "holberton.h"

/**
* _puts - Entry point
* @str: char string pointer
* Return: print string to output
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
