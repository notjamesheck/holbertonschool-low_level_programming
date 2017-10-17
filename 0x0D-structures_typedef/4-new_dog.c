#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - Entry point
* @name: string pointer
* @age: float parameter
* @owner: string pointer
* Return: struct pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
