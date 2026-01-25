#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - Hash tablosuna eleman ekler veya gunceller.
 * @ht: Hash tablosu.
 * @key: Anahtar.
 * @value: Deger.
 * Return: Basari durumunda 1, aksi halde 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;
	char *v_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			v_copy = strdup(value);
			if (v_copy == NULL)
				return (0);
			free(temp->value);
			temp->value = v_copy;
			return (1);
		}
		temp = temp->next;
	}
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
