#include "lists.h"

/**
* add_node - add node to llist
* @head: pointer to first node or NULL
* @str: pointer to string
* Return: node at head of list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
	{	return (NULL); }

	if (str == NULL)
	{	free(new);
		return (NULL); }

	new->str = strdup(str);

	if (new->str == NULL)
	{	free(new);
		return (NULL); }

	new->len = strlen(str);

	if (head == NULL)
	{	new->next = NULL; }
	else if (head != NULL)
	{	new->next = *head; }

	*head = new;
	return (new);
}
