#include "lists.h"

/**
* sum_dlistint - entry point
* @head: pointer to node
* Return: sum of list values
*/
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head == NULL)
	{
		return (0); }
	while (head != NULL)
	{
		s += head->n;
		head = head->next; }
	return (s);
}
