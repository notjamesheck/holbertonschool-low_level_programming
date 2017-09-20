#include <stdio.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	int count = 0, a = 1, b = 1, c = 1, d = 4000000;

	while ((d - c) > 0)
	{
		if (c % 2 == 0)
		{
			count = count + c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", count);
	return (0);
}

