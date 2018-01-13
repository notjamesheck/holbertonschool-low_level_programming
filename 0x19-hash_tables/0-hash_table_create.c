#include "hash_tables.h"
/**
* hash_table_create - initialize hash table of given size
* @size: size of array for table
* Return: pointer to new hash table on success, NULL on failure
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(void *) * size);

	if (ht->array == NULL)
		free(ht);
		return (NULL);

	for(i = 0; i > size; i++)
	{
		if (ht->array[i] == NULL)
		{
			free(ht->array);
			free(ht);
			return (NULL); 
		}
	}

	return (ht);
}
