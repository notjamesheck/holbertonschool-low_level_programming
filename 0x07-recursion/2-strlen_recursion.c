#include "holberton.h"

/**
* _strlen_recursion - Entry point
* @s: pointer to char array
* Return: void, int length of string
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));

	}
	return (0);
}
