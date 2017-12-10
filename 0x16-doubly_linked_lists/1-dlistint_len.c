#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* dlistint_len - entry point
* @h: head node of doubly linked list
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 1;

	if (h == NULL)
	{
		return (0); }
	while (h->next != NULL)
	{
		count++;
		h = h->next; }
	return (count);
}
