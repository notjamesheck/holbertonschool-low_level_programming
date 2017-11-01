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
	unsigned int i = 1;
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (NULL); }
	while (i < idx)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL); }
		i++; }
	if (temp == NULL)
	{
		return (NULL); }
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
