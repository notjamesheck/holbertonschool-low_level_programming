#include "holberton.h"
#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
void puts_half(char *str)
{
	int i = 0, m = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	printf("%d\n", i);
	m = (i - 1) / 2;
	printf("%d\n", m);
	_putchar('\n');
}
