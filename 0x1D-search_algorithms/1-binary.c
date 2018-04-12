#include "search_algos.h"
/**
 * binary_search - look for a given value using binary search
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: integer
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid = 0, high, i;

	/* NULL check */
	if (array == NULL)
	{
		return (-1); }

	/* let the search begin */
	low = 0;
	high = size - 1;
	
	/* comparison of middle element */
	while (value != array[mid] && low <= high)
	{
		mid = ((low + high) / 2);
		for (i = low; i <= high; i++)
		{
			if (i == low)
				printf("Searching in array: ");

			printf("%d", array[i]);
			if (i == high)
				printf("\n");
			else
				printf(", ");
		}
		if (value < array[mid])
			high = mid;
		else if (value > array[mid])
			low = mid + 1;
	}

	/* comparison of search result */
	if (value == array[mid])
	{
		return (mid);
	}
	else
	{
		return (-1);
	}
}
