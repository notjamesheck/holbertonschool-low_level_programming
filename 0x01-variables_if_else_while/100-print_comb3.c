#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a = '0';

	int b = '1';

	while (a < '9')
	{
		while (b <= '9')
		{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
				b++;
		}

		a++;
		b++;
	}

	return (0);
}
