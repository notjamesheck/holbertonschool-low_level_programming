#include "holberton.h"

/**
* rev_string - Entry point
* @s: pointer to an string
* Return:
*/
void rev_string(char *s)
{
	int i, a = 0;
	char temp;

	for (i = 0; *(s + i) != '\0'; i++)
	{}

	i = i - 1;

	while (i > 0)
		{
		temp = *(s + a);
		*(s + a) = *(s + (a + i));
		*(s + (a + i)) = temp;
		a++;
		i = i - 2;
		}
}
