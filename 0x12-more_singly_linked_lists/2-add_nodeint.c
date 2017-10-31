#include "lists.h"

/**
* add_nodeint - Entry point
* @head: pointer to node
* @n: int parameter
* Return: pointer to node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL); }
	new->n = n;
	if (head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head); }
	new->next = *head;
	*head = new;
	return (*head);
}
