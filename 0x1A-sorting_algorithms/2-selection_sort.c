#include "sort.h"
/**
* swap - swap array items
* @x: int
* @y: int
* Return: void
*/
void swap(int *x, int *y)
{
   *x ^= *y;
   *y ^= *x;
   *x ^= *y;
}
/**
* selection_sort - selection sort array
* @array: array
* @size: size of array
* Return: sorted array
*/
void selection_sort(int *array, size_t size)
{
	int i, j, iMin, s = size - 1;

	for (j = 0; j <= s; j++)
	{
		iMin = j;
		for (i = j + 1; i <= s; i++)
		{
			if (array[i] < array[iMin])
			{
				iMin = i;
			}
		}

		if (iMin != j)
		{
			swap(&array[j], &array[iMin]);
			print_array(array, size);
		}
	}
}
