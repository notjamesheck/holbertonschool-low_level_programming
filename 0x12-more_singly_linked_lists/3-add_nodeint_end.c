#include "lists.h"

/**
* add_nodeint_end - Entry point
* @head: pointer to node
* @n: int parameter
* Return: list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL); }

	new->n = n;
	new->next = NULL;
	if (temp == NULL)
	{
		*head = new;
		return (new); }
	while (temp->next != NULL)
	{
		temp = temp->next; }
	temp->next = new;
	return (new);
}
