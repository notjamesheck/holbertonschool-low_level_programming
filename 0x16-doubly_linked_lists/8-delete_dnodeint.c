#include "lists.h"
/**
* delete_dnodeint_at_index - entry point
* @head: something
* @index: something
* Return: something
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
/*	dlistint_t *temp;*/

	if (*head == NULL) /* if passed null, fail */
	{
		return (-1); }
	if (index == i) /* if index stops at head leave it alone? */
	{
		*head = (*head)->next;
		free((*head)->prev);

		return (1); }
	while (i < index)
	{
		*head = (*head)->next;
		if (*head == NULL) /* if index does not exist, fail*/
		{
			return (-1); }
		i++; }
	((*head)->next)->prev = (*head)->prev;
	((*head)->prev)->next = (*head)->next;
	free(*head);
	return (1);
}
