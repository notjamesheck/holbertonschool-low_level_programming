#include "holberton.h"
/**
* set_bit - Entry point
* @n: string pointer
* @index: int parameter
* Return: 1, -1 on failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shift = 1;

	if (n == NULL)
	{
		return (-1); }

	if (((sizeof(unsigned long int)) * 8 - 1) < index)
		return (-1);
	shift = shift << index;
	*n |= shift;
	return (1);
}
