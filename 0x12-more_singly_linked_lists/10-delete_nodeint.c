#include "lists.h"
/**
* delete_nodeint_at_index - Entry point
* @head: node pointer
* @index: int parameter
* Return: 1 on success , -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1, j = 0;
	listint_t *temp1 = *head;
	listint_t *temp2 = *head;

	if (*head == NULL)
	{
		return (-1); }
	if (head == NULL)
	{
		return (-1); }
	if (index == 0)
	{
		temp1 = (*head)->next;
		free(*head);
		*head = temp1;
		return (1); }
	while (i < index)
	{
		temp1 = temp1->next;
		if (temp1 == NULL)
		{
			return (-1); }
		i++; }
	while (j < index)
	{
		temp2 = temp2->next;
		if (temp2 == NULL)
		{
			return (-1); }
		j++; }
	if (temp1 == NULL)
	{
		return (-1); }
	if (temp2 == NULL)
	{
		return (-1); }
	temp1->next = temp2->next;
	free(temp2);
	return (1);
}
