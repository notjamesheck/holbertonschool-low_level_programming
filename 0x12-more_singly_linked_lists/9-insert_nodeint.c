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
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
	{
		return (NULL); }
	if (*head == NULL)
	{
		free(new);
		return (NULL); }
	if (idx == 0)
	{
		new->next = temp->next;
		temp->next = new;
		return (new); }
	while (idx > 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new);
			return (NULL); }
		idx--; }
	if (temp == NULL)
	{
		free(new);
		return (NULL); }
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
