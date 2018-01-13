#include "hash_tables.h"
/**
* hash_table_create - initialize hash table of given size
* @size: size of array for table
* Return: pointer to new hash table on success, NULL on failure
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(void *) * size);

	if (ht == NULL)
		return (NULL);

	return (ht);
}
