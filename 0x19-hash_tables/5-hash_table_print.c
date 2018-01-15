#include "hash_tables.h"


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int b = 0, a = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL)
	{
		return; }
	printf("{");
	while (b <= ht->size)
	{
		if (ht->array[b])
		{
			temp = ht->array[b];
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				a++;
				if (a > 0)
					printf(", ");
				temp = temp->next;
			}
		}
		if ((b + 1) > ht->size)
		{
			printf("}\n");
		}
		a = 0;
		b++;
	}
	return;
}
