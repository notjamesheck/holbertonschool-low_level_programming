#include "lists.h"

/**
* add_nodeint - Entry point
* @head: pointer to node
* @n: int parameter
* Return: pointer to node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *) malloc(sizeof(listint_t));

	temp->n = n;
	if (head == NULL)
	{
		temp->next = NULL;
		*head = temp;
		return (*head); }
	temp->next = *head;
	*head = temp;
	return (*head);
}
