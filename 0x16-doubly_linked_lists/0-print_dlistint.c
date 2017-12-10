#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* print_dlistint - entry point
* @h: head node of doubly linked list
* Return: number of nodes, print contents
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 1;

	if (h == NULL)
	{
		return (0); }
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next; }
	printf("%d\n", h->n);
	return (count);
}
