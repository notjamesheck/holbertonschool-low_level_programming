#include "lists.h"
/**
* free_listint - Entry point
* @head: pointer to node
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return; }
	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp); }
	temp = head;
	free(temp);
	head = NULL;
}
