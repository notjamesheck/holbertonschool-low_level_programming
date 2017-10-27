#include "lists.h"

/**
* list_len - node counter
* @h: node pointer
* Return: node count
*/
size_t list_len(const list_t *h)
{
	int count = 0;
	list_t *temp = NULL;

	if (h == NULL)
	{
		return (count); }
	if (h->next == NULL)
	{
		return (++count); }
	else if (h->next != NULL)
	{
		count++;
		temp = h->next; }

	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	count++;
	return (count);
}
