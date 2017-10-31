#include "lists.h"
/**
* free_listint2 - Entry point
* @head: pointer to node
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp; }
}
