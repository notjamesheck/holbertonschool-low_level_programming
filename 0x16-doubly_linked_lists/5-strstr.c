#include "holberton.h"

/**
* _strstr - Entry point
* @haystack: pointer to a char
* @needle: pointer to a char
* Return: pointer to a char
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, u;

	if (needle[i] == '\0')
	{
		return (haystack);
	}

	while (haystack[i])
	{
		u = 0;
		if (haystack[i] == needle[u])
		{
			while (haystack[i + u] && needle[u] && haystack[i + u] == needle[u])
			{
				u++;
				if (!needle[u])
				{
					return (haystack + i);
				}
			}
		}
		i++;
	}
	return (NULL);
}
