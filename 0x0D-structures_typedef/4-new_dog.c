#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strlen - Entry point
* @s: char string pointer
* Return: int, string length
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; *s; c++, s += 1)
	{}
	return (c);
}
/**
* _strcpy - pointer to Entry point
* @dest: array pointer
* @src: array pointer
* Return: char, copy src to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
* dogdup - Entry point
* @s: string pointer
* Return: duplicate string
*/
char *dogdup(char *s)
{
	char *doge = malloc(sizeof(char) * (_strlen(s) + 1));

	if (doge == NULL)
		return (NULL);

	_strcpy(doge, s);
	return (doge);
}
/**
* new_dog - Entry point
* @name: string pointer
* @age: float parameter
* @owner: string pointer
* Return: struct pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = NULL;
	char *nam = NULL;
	char *own = NULL;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	nam = dogdup(name);
	if (nam == NULL)
	{
		free(new);
		return (NULL);
	}
	own = dogdup(owner);
	if (own == NULL)
	{
		free(nam);
		free(new);
		return (NULL);
	}

	new->name = nam;
	new->age = age;
	new->owner = own;
	return (new);
}
