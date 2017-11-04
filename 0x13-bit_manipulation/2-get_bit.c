#include "holberton.h"
/**
* get_bit - Entry point
* @n: int parameter
* @index: int parameter
* Return: 1, 0 or -1 on failure
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shifted = 0;

	if (index >= (sizeof(n) * 8))
	{
		return (-1); }

	shifted = n >> index;

	if ((shifted & 1) == 1)
		return (1);
	else if ((shifted & 1) == 0)
		return (0);
	else
		return (-1);
}
