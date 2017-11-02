#include "lists.h"
/**
* reverse_listint - Entry point
* @head: pointer to node
* Return: reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after = (*head)->next;

	if (*head == NULL || head == NULL)
	{
		return (NULL); }
	while ((*head)->next != NULL)
	{
		(*head)->next = before;
		before = *head;
		*head = after;
		after = after->next;
	}
	(*head)->next = before;
	return (*head);
}
