#include "hash_tables.h"
/**
* hash_table_print - prints a hash table
* @ht: a hash table
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int b = 0, a = 0;
/*	hash_node_t *temp = NULL;*/

	if (ht == NULL)
	{
		return; }
	printf("{");
	while (b <= ht->size)
	{
		if (ht->array[b])
		{
			while (ht->array[b])
			{

				if (a == 1)
					printf(", ");
				printf("'%s': '%s'", ht->array[b]->key, ht->array[b]->value);
				a = 1;
				ht->array[b] = ht->array[b]->next;
			}
		}
		if ((b + 1) > ht->size)
		{
			printf("}\n"); }
		b++;
	}
}
