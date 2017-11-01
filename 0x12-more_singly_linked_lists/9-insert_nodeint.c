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
	listint_t *temp = *head;
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL); }
	if (*head == NULL)
	{
		return (NULL); }
	new->n = n;
	while (i < idx)
	{
		temp = temp->next;
		i++; }
	if (temp == NULL)
	{
		return (NULL); }
	new->next = temp->next;
	temp->next = new;
	return (new);
}
