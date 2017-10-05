#include "holberton.h"

/**
* _prime - Entry point
* @n: int parameter
* @mod: int parameter
* Return: int, 1 or 0
*/
int _prime(int n, int mod)
{
	if (mod > (n / 2))
	{
		return (1);
	}
	if (n % mod == 0)
	{
		return (0);
	}
	return (_prime(n, mod + 1));
}

/**
* is_prime_number - Entry point
* @n: int parameter
* Return: int, 1 or 0
*/
int is_prime_number(int n)
{
	int mod = 2;
	int prime = 0;

	if (n <= 1)
	{
		return (0);
	}
	prime =  _prime(n, mod);
	return (prime);
}
