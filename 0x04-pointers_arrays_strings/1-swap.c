#include "holberton.h"

/**
* swap_int - Entry point
* @a: int pointer
* @b: int pointer
* Return: void, swap values
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
