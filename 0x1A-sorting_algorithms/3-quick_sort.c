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
* partition - function
* @arr: array
* @low: low
* @high: high
* Return: return
*/
int partition(int *arr, int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
/**
* q_sort - function
* @arr: array
* @low: low
* @high: high
* Return: return
*/
void q_sort(int *arr, int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high);

		q_sort(arr, low, pi - 1);
		q_sort(arr, pi + 1, high);
	}
}
/**
* quick_sort - function
* @array: array
* @size: size
* Return: return
*/
void quick_sort(int *array, size_t size)
{
	if (!array && size < 2)
		return;

	q_sort(array, 0, size - 1);
}
