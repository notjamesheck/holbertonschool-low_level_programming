#include "holberton.h"

/**
* puts2 - 
* @str: pointer to string
* Return: void, print every other char
*/
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) > '\0')
	{
	_putchar(*(str + i));
	i += 2;
	}
	_putchar('\n');
}
