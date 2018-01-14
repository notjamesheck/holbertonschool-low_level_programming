#include "hash_tables.h"
/**
* hash_table_set - a function that adds an element to the hash table
* @ht: hash table you want to add or update the key/value to
* @key: the key
* @value: the value associated with the key
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int b = 0; /* this holds index */
	hash_node_t *temp; /* place in array */
	hash_node_t *new; /* new node */

	if (key[0] == '\0') /* check for empty string */
	{
		return (0);
	}
	new = malloc(sizeof(hash_node_t)); /* create new node */
	if (new == NULL) /* null check */
	{
		return (0);
	}
	new->key = strdup(key); /* assign key and val */
	new->value = strdup(value);
	new->next = NULL;
	b = key_index((const unsigned char *)key, ht->size); /* get index */
	/* printf("the key is : %lu\n", b); */
	if (!ht->array[b]) /* initial insertion */
	{
		/* printf("It's null in here!\n"); */
		ht->array[b] = new;
		return (1);
	}
	temp = ht->array[b]; /* existing nodes */
	new->next = temp;
	ht->array[b] = new;
	return (1);
}
