#include "lists.h"
/**
* free_dlistint - entry point
* @head: pointer to head
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		return; }
	temp = head;
	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp); }
	temp = head;
	free(temp);
	head = NULL;
}
