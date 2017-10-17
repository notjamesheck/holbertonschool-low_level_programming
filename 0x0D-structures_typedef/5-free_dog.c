#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Entry point
* @d: string pointer
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
