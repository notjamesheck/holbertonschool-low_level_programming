#include "holberton.h"
/**
* binary_to_uint - Entry point
* @b: pointer to string
* Return: int onversion of binary string
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0;

	if (b == NULL)
	{
		return (0); }

	while (b[i])
	{
		if (b[i] == '1')
		{
			n = n * 2;
			n = n | 1; }
		else if (b[i] == '0')
		{
			n = n * 2; }
		else
		{
			return (0); }

		i++; }
	return (n);
}
