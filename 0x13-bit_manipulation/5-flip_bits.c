#include "holberton.h"
/**
* pass - Entry point
* @n: int parameter
* Return: number of bits that are different
*/
unsigned int pass(unsigned long int n)
{
	unsigned int m = 1, count = 0;

	while (n)
	{
		if ((n & m) == 1)
		{
			count++; }
		n >>= 1;
	}
	return (count);
}
/**
* flip_bits - Entry point
* @n: int parameter
* @m: int parameter
* Return: result of pass function
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (pass(n ^ m));
}
