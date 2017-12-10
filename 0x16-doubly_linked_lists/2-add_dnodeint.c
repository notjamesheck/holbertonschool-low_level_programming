#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* add_nodeint - Entry point
* @head: new head node
* @n: new head node value
* Return: list with new head node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL); }
	new->n = n;
	if (head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head); }
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
