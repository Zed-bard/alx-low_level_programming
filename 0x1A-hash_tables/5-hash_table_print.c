#include "hash_tables.h"

/**
 * hash_table_print - fucntion to print a hash table
 * @hashTable: type pointer the hash_table
 */

void hash_table_print(const hash_table_t *hashTable)
{
	unsigned long int i;
	hash_node_t *current_node;
	bool flag = false;

	if (hashTable == NULL)
		return;

	printf("{");
	for (i = 0; i < hashTable->size; i++)
	{
		if (hashTable->array[i] != NULL)
		{
			if (flag == true)
				printf(", ");

			for (current_node = hashTable->array[i]; current_node != NULL;
				flag = true)
			{
				printf("'%s': '%s'", current_node->key,
				       current_node->value);
				current_node = current_node->next;
				if (current_node != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}

