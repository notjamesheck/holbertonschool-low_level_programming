#include "holberton.h"

/**
* _strstr - Entry point
* @haystack: pointer to a char
* @needle: pointer to a char
* Return: pointer to a char
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, o;

	while (haystack[i])
	{
		if (haystack[i] == needle[o])
		{
			o = 0;
			while (haystack[i + o] == needle[o])
			{
				if (needle[o + 1] == '\0')
				{
					return (haystack + i);
				}
				o++;
			}
		}
		i++;
	}
	return (NULL);
}
