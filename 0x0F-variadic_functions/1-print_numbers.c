#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - print int array
* @separator: string pointer
* @n: argument count
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		printf("%d", va_arg(ap, int));

		if (i + 1 != n && separator == NULL)
		{}
		else if (i + 1 != n && separator != NULL)
			printf("%s", separator);
		else
			printf("\n");
		i++;
	}
	va_end(ap);
}
