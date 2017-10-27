#include "lists.h"

/**
* print_list - print list from linked list
* @h: node pointer
* Return: node count
*/
size_t print_list(const list_t *h)
{
	list_t *temp = NULL;
	unsigned int count = 0;

	if (h == NULL)
	{
		return (-1); }

	if (h->str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)"); }
	else if (h->str != NULL)
	{
		printf("[%d] %s\n", h->len, h->str); }

	count++;

	if (h->next == NULL)
	{
		return (count); }
	else if (h->next != NULL)
	{
		temp = h->next; }

	while (temp->next != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
		if (temp->next == NULL)
		{
			break; }
	}

	printf("[%d] %s\n", temp->len, temp->str);
	count++;

	return (count);
}
