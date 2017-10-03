#include "holberton.h"

/**
* print_chessboard - Entry point
* @a: pointer to a char array
* Return: print alphanumeric characters
*/
void print_chessboard(char (*a)[8])
{
	int x = 0, y;
	while (x < 8)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
			if (y == 7 && x != 8)
			{
				_putchar('\n');
			}
		}
		x++;
	}
}
