#include "lists.h"
/**
* pop_listint - Entry point
* @head: pointer to node
* Return: head node data
*/
int pop_listint(listint_t **head)
{
	int val = 0;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0); }
	val = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (val);
}
