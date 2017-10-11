#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* _strdup - Entry point
* @str: pointer to string
* Return: pointer to string, copy of str on heap
*/
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	return (strdup(str));
}
