#include "holberton.h"
#include <stdio.h>

/**
* _atoi - Entry point
* @s: pointer to string
* Return: int converted from string
*/
int _atoi(char *s)
{
	int cLoop, pol = 1, plc = 1, val = 0;

	for (cLoop = 0; s[cLoop] != '\0'; cLoop++)
	{
		if (s[cLoop] == '-')
		{
			pol = pol * -1;
		}
		printf("- 1st loop: %d", s[cLoop]);
		if ((s[cLoop] >= 'a' && s[cLoop] <= 'z') || (s[cLoop] >= 'A' && s[cLoop] <= 'Z'))
		{
			plc = plc * 10;
			if (s[cLoop + 1] == ' ')
			{
				break;
			}
		}
	}

	for (cLoop = 0; s[cLoop] != '\0'; cLoop++)
	{
		if ((s[cLoop] >= 'a' && s[cLoop] <= 'z') || (s[cLoop] >= 'A' && s[cLoop] <= 'Z'))
		{
			val = val + ((s[cLoop] - '0') * plc);
			printf(" - 2nd loop: %d\n", s[cLoop]);	
				if (s[cLoop + 1] == ' ')
				{
					break;
				}
		}
	}
	return (val * pol);
}
