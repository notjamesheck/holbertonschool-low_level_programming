#include "holberton.h"

/**
* _strlen - Entry point
* @s: char string pointer
* Return: int, string length
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; *s; c++, s += 1)
	{}
	return (c);
}
