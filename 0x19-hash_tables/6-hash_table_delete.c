#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash table
* @ht - a hash table
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int b = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL)
	{
		return; }
	while (b < ht->size)
	{
		while (ht->array[b] != NULL)
		{
			temp = ht->array[b];
			ht->array[b] = ht->array[b]->next;
			free(temp->key);
			free(temp->value);
			free(temp); }
			b++;
	}
	free(ht->array);
	free(ht);
}
