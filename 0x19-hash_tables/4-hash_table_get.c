#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table
* @key: key
* Return: value, or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int b = 0;
	hash_node_t *temp;

	if (key[0] == '\0' || key == NULL || ht == NULL)
	{
		return (NULL); }
	b = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[b])
	{
		return (NULL); }
	temp = ht->array[b];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value); }
		temp = temp->next;
	}
	return (NULL);
}
