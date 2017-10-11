#include "holberton.h"
#include <stdlib.h>
/**
* _strlen_recursion - Entry point
* @s: pointer to char array
* Return: void, int length of string
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);

	}
	return (0);
}
/**
* str_concat - Entry point
* @s1: pointer to string
* @s2: pointer to string
* Return: pointer to string on heap
*/
char *str_concat(char *s1, char *s2)
{
	char *cat = NULL;
	char *blnk = "";
	int len = 0, i = 0, a = 0;

	if (s1 == NULL)
	{
		len += 0;
		s1 = blnk;
	}
	else
	len += _strlen_recursion(s1);
	if (s2 == NULL)
	{
		len += 0;
		s2 = blnk;
	}
	else
	len += _strlen_recursion(s2);
	if (len == 0)
	{
		cat = malloc(sizeof(char));
		cat[0] = '\0';
		return (cat);
	}
	else
	cat = malloc(len + 1);
	if (cat == NULL)
		return (NULL);

	if (*s1 != '\0')
		for (i = 0; s1[i]; i++)
			cat[i] = s1[i];

	if (*s2 != '\0')
		for (a = 0; s2[a]; a++)
			cat[a + i] = s2[a];

	cat[a + i] = '\0';
	return (cat);
}
