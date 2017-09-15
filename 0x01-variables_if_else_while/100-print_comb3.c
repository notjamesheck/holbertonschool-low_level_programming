#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0', b = '1';

	while (a < '9')
	{
		while (b <= '9')
		{
			putchar(a);
			putchar(b);

			if (a < '8' || b < '9')
			{
			putchar(',');
			putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
