#include "lists.h"

/**
* add_node_end - add node to llist
* @head: pointer to tail node or NULL
* @str: pointer to string
* Return: node at tail of list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *) malloc(sizeof(list_t));
	list_t *temp = *head;

	if (new == NULL)
	{
		return (NULL); }

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL); }

	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new); }

	while (temp->next != NULL)
	{
		temp = temp->next; }

	temp->next = new;
	return (new);
}
