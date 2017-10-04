#include "holberton.h"

/**
* _print_rev_recursion - Entry point
* @s: pointer to char array
* Return: void, print string in reverse to output
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
}
