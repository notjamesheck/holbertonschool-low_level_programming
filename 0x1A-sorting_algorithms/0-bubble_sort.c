#include "sort.h"

/**
* bubble_sort - sort by value
* @array: array to be sorted
* @size: aize of array
* Return: by-value sorted array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

    /* iterate through loop size times */
	for (i = 0; i < size; i++) 
	{ 
	    /* check each elem. and compare with next */
		for (j = 0; j < size - 1; j++) 
		{
			/* if next item in array is larger, swap*/
            if (array[j] > array[j + 1]) 
			{
				temp = array[j]; 
				array[j] = array[j + 1];
				array[j + 1] = array[j];
			}
		}
		print_array(array, size);
	}
}
