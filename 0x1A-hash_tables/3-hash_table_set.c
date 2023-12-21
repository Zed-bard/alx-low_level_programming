#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: Pointer to the hash table
 * @key: Key to be inserted
 * @value: Value associated with the key
 * Return: 0 if failed, 1 if successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return 0;

	idx = key_index((unsigned char *)key, ht->size);

	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return 0;
			return 1;
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return 0;

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return 0;
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return 0;
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return 1;
}
