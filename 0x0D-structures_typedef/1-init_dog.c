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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
