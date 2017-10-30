#include "lists.h"

/**
* insert_nodeint_at_index - Entry point
* @head: pointer to node
* @idx: int parameter
* @n: int parameter
* Return: new node at idx
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1, j = 0;
	listint_t *temp1 = *head;
	listint_t *temp2 = *head;
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL); }
	if (*head == NULL)
	{
		return (NULL); }
	while (i < idx)
	{
		temp1 = temp1->next;
		i++; }
	if (temp1 == NULL)
	{
		return (NULL); }
	while (j < idx)
	{
		temp2 = temp2->next;
		j++; }
	if (temp2 == NULL)
	{
		return (NULL); }
	temp1->next = new;
	new->n = n;
	new->next = temp2;
	return (*head);
}
