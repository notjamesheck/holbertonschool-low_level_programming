#include "search_algos.h"

/*
 * size_t2int - safely convert size_t to int
 * @val: value to convert
 * Return: integer
 */
int size_t2int(size_t val)
{
	/* SO/questions/27490762/how-can-i-convert-to-size-t-from-int-safely */
	return (val <= INT_MAX) ? (int)((ssize_t)val) : -1;
}
/*
 * linear_search - search for a given key and report success or failure.
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: integer
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i, place;
	int found = 0;

	/* Null Check */
	if (array == NULL)
	{
		return (-1);
	}
	/* Let The Search Begin */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", size_t2int(i), array[i]);
		if (value == array[i])
		{
			found = 1;
			place = i;
			break;
		}
	}
	if (found == 1)
		return (size_t2int(place));
	else
		return (-1);
}
