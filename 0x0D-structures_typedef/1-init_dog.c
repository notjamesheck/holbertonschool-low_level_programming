#include "dog.h"
#include <stdio.h>

/**
* init_dog - Entry point
* @d: struct pointer
* @name: string pointer
* @age: float parameter
* @owner: string pointer
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	if (name == NULL)
		return;
	d->name = name;
	if (age == 0)
		return;
	d->age = age;
	if (owner == NULL)
		return;
	d->owner = owner;
}
