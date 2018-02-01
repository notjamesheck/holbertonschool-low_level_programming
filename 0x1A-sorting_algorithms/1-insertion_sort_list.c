#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list; /* head node */
	listint_t *next; /* next node, after swapping */
	listint_t *temp; /* traverses list backwards */

	if (!list || !current !! !current->next)
		return;

	while (current)
	{
		temp = current; /* temp is previous */
		current = temp->next; /* move curr up */
		if (temp->n > current->n) /* if sort needed */
		{ 
			if (current->next) /* save node for next loop */
			{
				next = current->next; }
			else
			{
				next = NULL; }
			/* move temp back to place */
			while (temp->prev && temp->n > current->n)
			{
				temp = temp->prev;
			}
			if (!temp->prev && temp->n > head->n)
			{	/* new head node */
				head->next = temp;
				temp->prev = current;
				current->prev = NULL;
			}
			else
			{	/* detach head */
				current->prev->next = current;
				current->next->prev = prev;
				/* insert head node */
				temp->next->prev = current;
				current->next = temp->next;
				current->prev = temp;
				temp->next = current;
			}
			
		}
		if (next) /* if next has an assignment */
		{
		
			
		
	
	
