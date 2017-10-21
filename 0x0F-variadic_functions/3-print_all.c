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
	char c, *s;
	int i, a = 0;
	float f;
	va_list ap;

	va_start(ap, *format);
	while (format[a])
	{
		switch (format[a])
		{
			case 'c': /* char */
			c = (char) va_arg(ap, int);
			printf("%c", c);
			break;
			case 'i': /* integer */
			i = va_arg(ap, int);
			printf("%d", i);
			break;
			case 'f': /* float */
			f = (float) va_arg(ap, int);
			printf("%f", f);
			break;
			case 's': /* string */
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");
			else
			printf("%s", s);
			break;
			default:
			a++;
			continue;
		}
		if (format[a + 1] != 0)
			{printf(", "); }
		else
		printf("\n");
		a++;
	}
	va_end(ap);
}
