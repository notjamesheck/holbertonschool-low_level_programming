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
	int i = 0;

	temp = *h; /* temporarily save address of head */
	new = malloc(sizeof(listint_t));

	if (new == NULL) /* null check malloc */
	{
		return (NULL); }
	new->n = n; /* assign new node value */

	if (*h == NULL || idx == 0) /* if head is null, makes new head*/
	{
		add_dnodeint(h, n); } /* using add_dnode function */

	while (idx > i) /* go to index in list*/
	{
		if (temp->next == NULL)
		{
			add_dnodeint_end(h, n); }
		else
		{
			temp = temp->next; } /* traverse list */
		if (temp == NULL) /* if null, index does not exist */
		{
			return (NULL); }
		i++; }
	new->next = temp->next; /* make new take place at index */
	new->prev = temp->prev;

	temp->next = new;

	return (new);
}
