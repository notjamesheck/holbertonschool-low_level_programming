#include "holberton.h"

/**
* puts_half - check the code for Holberton School students.
* @str: char string pointer
* Return: Always 0.
*/
void puts_half(char *str)
{
	int i = 0, c = 0;

	if (*(str + i) != '\0')
	{
		while (*(str + i) != '\0')
		{
			i++;
		}
	}
	if (i % 2 == 0)
	{
		while (c < ((i / 2)))
		{
			_putchar(*(str + (c + ((i / 2)))));
			c++;
		}
	}
	else if (i % 2 != 0)
	{
		while (c < (((i - 1) / 2)))
		{
			_putchar(*(str + (c + (((i - 1) / 2)))));
			c++;
		}
	}
	_putchar('\n');
}
