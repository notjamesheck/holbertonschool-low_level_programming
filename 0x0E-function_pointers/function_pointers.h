#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
