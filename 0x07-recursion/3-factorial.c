#include "holberton.h"

/**
* factorial - Entry point
* @n: int parameter
* Return: int factorial
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
