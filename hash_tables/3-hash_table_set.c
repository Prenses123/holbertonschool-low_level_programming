#define _GNU_SOURCE
#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value.
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new, *tmp;
	char *v_copy;

	if (!ht || !key || !*key || !value)
		return (0);
	v_copy = strdup(value);
	if (!v_copy)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = v_copy;
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(v_copy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(v_copy);
		free(new);
		return (0);
	}
	new->value = v_copy;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
