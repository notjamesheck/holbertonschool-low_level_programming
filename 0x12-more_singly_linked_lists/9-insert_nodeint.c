#include "lists.h"
/**
* insert_nodeint_at_index - Entry point
* @head: pointer to node
* @idx: int parameter
* @n: int parameter
* Return: new node at idx
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;

	if (*head == NULL)
	{
		return (NULL); }
	temp = *head;
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL); }
	new->n = n;

	if (idx == 0)
	{
		if (head == NULL)
		{
			new->next = NULL;
			*head = new;
			return (*head); }
	new->next = *head;
	*head = new;
	return (*head);	}


	while (idx > 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL); }
		idx--; }
	new->next = temp->next;
	temp->next = new;
	return (new);
}
