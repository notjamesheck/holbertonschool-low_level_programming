#include "function_pointers.h"

/**
* array_iterator - executes a function on each element of an array
* @array: pointer to a string
* @size: array size
* @action: print function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
