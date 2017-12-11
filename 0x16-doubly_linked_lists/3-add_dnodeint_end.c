#include "lists.h"

/**
* add_dnodeint_end - entry point
* @head: head node
* @n: value of new node at end
* Return: new node at end, NULL on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *temp;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL); }

	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next; }
	temp->next = new;
	new->n = n;
	new->prev = temp;
	new->next = NULL;
	return (new);
}
