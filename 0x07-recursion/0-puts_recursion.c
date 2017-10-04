#include "holberton.h"

/**
* _puts_recursion - Entry point
* @s: pointer to char array
* Return: void, print string to output
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
