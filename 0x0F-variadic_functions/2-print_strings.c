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
	unsigned int i = 0;
	char *s = NULL;
	va_list ap;

	va_start(ap, n);

	while (i <= n)
	{
		if (i == n)
		{
			printf("\n");
			break; }
		s = (va_arg(ap, char *));
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		printf("%s", s);

		if (i + 1 != n && separator != NULL)
			printf("%s", separator);

		i++;
	}
	va_end(ap);
}
