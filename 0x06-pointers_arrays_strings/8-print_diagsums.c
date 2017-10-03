#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - Entry point
* @a: pointer to a char array
* @size: size of array
* Return: sum of array contents
*/
void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, c = 0;

	while (c < size)
	{
		i = i + (size + 1);
		sum = sum + (a[i]);
		c++;
	}
	printf("%d\n", sum);
	c = 0;
	i = 0;
	i = (size - 1);
	printf("i = %d\n", i);
	sum = 0 + a[i];

	while (c < size)
	{
		i = i + (size - 1);
 		sum = sum + (a[i]);
		printf("in loop - %d\n", i);
		c++; 
	}	
	printf("%d\n", sum);
}
