#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Entry point
* @d: string pointer
* Return: void
*/
void free_dog(dog_t *d)
{
	free(d);
}
