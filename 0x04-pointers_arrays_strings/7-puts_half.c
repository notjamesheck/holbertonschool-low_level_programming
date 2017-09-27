#include "holberton.h"

/**
* puts_half - Entry point
* @str: pointer to char array
* Return: void, print half of string
*/
void puts_half(char *str)
{
	int i = 0, c = 0;

	if (*str != '\0')
	{
		for (i = 0; *(str + i) != '\0'; i++)
		{}

		if (i % 2 != 0)
		i -= 1;

		for (i = i / 2; (*(str + (c + i))); c++)
		{
			_putchar(*(str + (c + i)));
		}
	}
	_putchar('\n');
}
