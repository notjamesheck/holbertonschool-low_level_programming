#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - print int array
* @separator: string pointer
* @n: argument count
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	va_list ap;

	va_start(ap, n);

	while (i <= n)
	{
		printf("%s", va_arg(ap, char *));

		if (i != n && separator == NULL)
		{}
		else if (i != n && separator != NULL)
		{
			printf("%s", separator);
		}
		else
			printf("\n");
		i++;
	}
	va_end(ap);
}
