#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - Entry point
* @format: list of types passed to function
* Return: void
*/
void print_all(const char *const format, ...)
{
	char *s;
	int a = 0;
	va_list ap;

	va_start(ap, format);
	while (format[a] && format != NULL)
	{
		switch (format[a])
		{
			case 'c': /* char */
			printf("%c", va_arg(ap, int));
			break;
			case 'i': /* integer */
			printf("%d", va_arg(ap, int));
			break;
			case 'f': /* float */
			printf("%f", (float)va_arg(ap, double));
			break;
			case 's': /* string */
			s = va_arg(ap, char *);
			if (s == NULL)
				s = "(nil)";

			printf("%s", s);
			break;
			default:
			a++;
			continue;
		}
		if (format[a + 1] != 0)
			printf(", ");

		a++;
	}
	printf("\n");
	va_end(ap);
}
