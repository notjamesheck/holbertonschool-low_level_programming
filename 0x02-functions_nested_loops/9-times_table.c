#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int rich, homi, qwon; 

	for (rich = 0; rich < 10; rich++)
	{
		for (homi = 0; homi < 10; homi++)
		{
			qwon = homi * rich; 
			
			if (homi == 0)
			{
				_putchar(qwon + '0');
			}
			else if (qwon > 9)
			{
				_putchar((qwon / 10) + '0');
				_putchar((qwon % 10) + '0');
			}
			else if (qwon <= 9)
			{
				_putchar(' ');
				_putchar(qwon + '0');
			}

			if (homi != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
