#include "lists.h"
/**
* print_listint - Entry point
* @h: pointer to node
* Return: node count
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0); }

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next; }
	printf("%d\n", h->n);
	return (count + 1);
}
