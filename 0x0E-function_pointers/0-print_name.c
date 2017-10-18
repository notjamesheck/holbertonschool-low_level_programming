#include "function_pointers.h"

/**
* print_name - prints a name
* @name: pointer to string
* @f: pointer to function that prints
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	f(name);
}
