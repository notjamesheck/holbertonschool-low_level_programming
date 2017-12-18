#include "lists.h"
/**
* insert_dnodeint_at_index - entry point
* @h: node pointer
* @idx: int
* @n: int
* Return: something
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new; /* initialize struct type */
	dlistint_t *temp; /* init struct type */
	dlistint_t *next; /* for the next node */
	unsigned int c;

	temp = *h; /* temporarily save address of head */

	if (*h == NULL || idx == 1) /* if head is null, makes new head*/
	{
		add_dnodeint(h, n); } /* using add_dnode function */

	for (c = 1; idx > c; c++) /* go to index in list*/
	{
		temp = temp->next;  /* traverse list */
		if (temp == NULL) /* if null, index does not exist */
			return (NULL);
	}

	if (temp->next == NULL) /* if last node */
	{
		add_dnodeint_end(h, n); }

	new = malloc(sizeof(listint_t)); /* malloc and null check */
	if (new == NULL)
	{
		return (NULL); }
	new->n = n;
	if (temp->next != NULL)
	{
		next = temp->next;
		next->prev = new; }
	new->next = temp->next; /* make new take place at index */
	new->prev = temp;
	temp->next = new;

	return (new);
}
