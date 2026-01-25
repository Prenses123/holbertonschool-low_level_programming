#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/* 1. Hash tablosu yapisi icin yer ayir */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;

	/* 2. Dugumlerin (nodes) tutulacagi dizi icin yer ayir */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* 3. Dizinin her elemanini NULL olarak baslat */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
