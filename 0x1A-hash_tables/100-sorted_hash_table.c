#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Create a sorted hash table
 * @size: size of the hash table
 *
 * Return: pointer to the new table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;
	sht->shead = NULL;
	sht->stail = NULL;

	return (sht);
}
/**
 * shash_table_set - Add element to the sorted hash table
 * @ht: A pointer to the sorted hash table
 * @key: The key to add - cannot be an empty string
 * @value: The value associated with key
 * Return: success 1 or 0 failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *current, *tempFile;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tempFile = ht->shead;
	while (tempFile)
	{
		if (strcmp(tempFile->key, key) == 0)
		{
			free(tempFile->value);
			tempFile->value = value_copy;
			return (1);
		}
		tempFile = tempFile->snext;
	}

	current = malloc(sizeof(shash_node_t));
	if (current == NULL)
	{
		free(value_copy);
		return (0);
	}
	current->key = strdup(key);
	if (current->key == NULL)
	{
		free(value_copy);
		free(current);
		return (0);
	}
	current->value = value_copy;
	current->next = ht->array[index];
	ht->array[index] = current;

	if (ht->shead == NULL)
	{
		current->sprev = NULL;
		current->snext = NULL;
		ht->shead = current;
		ht->stail = current;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		current->sprev = NULL;
		current->snext = ht->shead;
		ht->shead->sprev = current;
		ht->shead = current;
	}
	else
	{
		tempFile = ht->shead;
		while (tempFile->snext != NULL && strcmp(tempFile->snext->key, key) < 0)
			tempFile = tempFile->snext;
		current->sprev = tempFile;
		current->snext = tempFile->snext;
		if (tempFile->snext == NULL)
			ht->stail = current;
		else
			tempFile->snext->sprev = current;
		tempFile->snext = current;
	}

	return (1);
}
/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: A pointer to the sorted hash table
 * @key: The key to get the value of
 * Return: the value associated with key, or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}
/**
 * shash_table_print - Prints a hash table
 * @ht: hash table
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tempFile;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		tempFile = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tempFile;
	}

	free(head->array);
	free(head);
}

