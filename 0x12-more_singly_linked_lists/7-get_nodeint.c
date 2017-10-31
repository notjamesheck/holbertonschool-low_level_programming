#include "lists.h"
/**
* get_nodeint_at_index - Entry point
* @head: node
* @index: int parameter
* Return: node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL); }
	while (i < index)
	{
		head = head->next;
		i++; }
	if (head == NULL)
	{
		return (NULL); }
	return (head);
}
