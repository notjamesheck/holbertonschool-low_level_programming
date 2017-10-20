#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - summoning function
* @n: argument count
* ...: variable arguments
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
