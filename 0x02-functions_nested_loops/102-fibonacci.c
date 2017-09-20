#include <stdio.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	int a = 1, b = 1, c = 1, d;

	for (d = 0; d < 50; d++)
	{
		if (d != 49)
		{
			printf("%i, ", c);
		}
		else
			printf("%i", c);
		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");
	return (0);
}

