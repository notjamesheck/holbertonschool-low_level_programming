#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	int n; /* set int */
	listint_t *cur, *ptr, *tmp; /* set three pointers */

	cur = *list; /* assign current to list head */
	if (cur->next == NULL) /* concise null check */
		return;

	cur = cur->next; /* assign current to next node */
	while (cur != NULL)
	{
		n = 0; /* set n to 0 */
		ptr = cur; /* set pointer to current */
		tmp = cur->prev; /* set temp to prev */
		cur = cur->next; /* set current to next */
		while (tmp != NULL && tmp->n > ptr->n)
		{ /* compares pointers behind current */
			n++; /* counts iterations */
			tmp = tmp->prev; /* goes back in list */ }
		if (n)
		{ /* if condition was met, n > 0 */
			ptr->prev->next = ptr->next;
			if (ptr->next != NULL)
				ptr->next->prev = ptr->prev;
			if (tmp == NULL) /* new head condition */
			{ /* pointer stuff */
				tmp = *list;
				ptr->prev = NULL;
				ptr->next = tmp;
				ptr->next->prev = ptr;
				*list = ptr; }
			else /* insert node at location */
			{ /* pointer stuff */
				tmp = tmp->next;
				tmp->prev->next = ptr;
				ptr->prev = tmp->prev;
				tmp->prev = ptr;
				ptr->next = tmp; } } } }
