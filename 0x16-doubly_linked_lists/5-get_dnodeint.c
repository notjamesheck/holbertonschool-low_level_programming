#include "lists.h"

/**
* get_dnodeint_at_index - entry point
* @head: node pointer
* @index: place in list
* Return: value at place in list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL); }
	while (i < index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL); }
		i++; }
	if (head == NULL)
	{
		return (NULL); }
	return (head);
}
