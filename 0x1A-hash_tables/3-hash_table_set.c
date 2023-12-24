#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: Pointer to the hash table
 * @key: Key to be inserted
 * @value: Value associated with the key
 *
 * Return: 0 if failed, 1 if successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (update_value(temp, value));

		temp = temp->next;
	}

	return (add_new_node(ht, key, value, idx));
}

/**
 * update_value - updates the value of an existing node
 * @node: Pointer to the hash node
 * @value: Value to be updated
 *
 * Return: 1 on success, 0 on failure
 */
int update_value(hash_node_t *node, const char *value)
{
	char *new_value;

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	free(node->value);
	node->value = new_value;

	return (1);
}

/**
 * add_new_node - adds a new node to the hash table
 * @ht: Pointer to the hash table
 * @key: Key to be inserted
 * @value: Value associated with the key
 * @idx: Index of the array
 *
 * Return: 1 on success, 0 on failure
 */
int add_new_node(hash_table_t *ht, const char *key, const char *value, unsigned long int idx)
{
	hash_node_t *new_node;
	char *new_key, *new_value;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_key = strdup(key);
	if (new_key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_value = strdup(value);
	if (new_value == NULL)
	{
		free(new_key);
		free(new_node);
		return (0);
	}

	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
