#include "holberton.h"

int _calc(int n, int c);
/**
* _sqrt_recursion - Entry point
* @n: int parameter
* Return: int, square root
*/
int _sqrt_recursion(int n)
{
	int sqrt = 0;
	int c = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	sqrt = _calc(n, c);
	return (sqrt);
}

/**
* calc - find square
* @n: int parameter
* @c: int parameter
* Return: int
*/
int _calc(int n, int c)
{
	if ((c *c) == n)
	{
		return (c);
	}
	if (c > (n / 2))
	{
		return (-1);
	}
	return (_calc(n, c + 1));
}
