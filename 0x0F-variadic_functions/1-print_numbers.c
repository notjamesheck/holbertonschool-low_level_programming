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

	while (i <= n)
	{
		if (i == n)
		{
			printf("\n");
			break; }

		printf("%d", va_arg(ap, int));

		if (separator != NULL && i + 1 != n)
			printf("%s", separator);

		i++;
	}
	va_end(ap);
}
