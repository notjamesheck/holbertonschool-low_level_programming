#include "lists.h"

/**
* listint_len - Entry point
* @h: pointer to node
* Return: node count
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0); }
	while (h->next != NULL)
	{
		i++;
		h = h->next; }
	return (i + 1);
}
