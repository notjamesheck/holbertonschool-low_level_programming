#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == 0)
		{
			printf("Name: (nil)\n");
		}
		else
		printf("Name: %s\n", d->name);

		if (d->age == 0)
		{
			printf("Age: (nil)\n");
		}
		else
		printf("Age: %.6f\n", d->age);
		
		if (d->owner == 0)
		{
			printf("Owner: (nil)\n");
		}
		else
		printf("Owner: %s\n", d->owner);
	}
}
