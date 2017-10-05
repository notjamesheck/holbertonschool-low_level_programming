#include "holberton.h"

/**
* _strlen_recursion - Entry point
* @s: pointer to char array
* Return: void, int length of string
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
/**
* _count - Entry point
* @s: pointer to char array
* @len: int parameter
* @length: int parameter
* Return: int, 1 or 0
*/
int _count(char *s, char *len, int length)
{
	if (*s != *len)
	{
		return (0);
	}
	if (length <= 0)
	{
		return (1);
	}
	return (_count((s + 1), (len - 1), length - 1));
}
/**
* is_palindrome - Entry point
* @s: pointer to char array
* Return: int, 1 or 0
*/
int is_palindrome(char *s)
{
	int len = 0, length = 0;

	if (*s == 0)
	{
		return (1);
	}
	len = _strlen_recursion(s) - 1;
	length = (len / 2);
	return (_count(s, s + len, length));
}
