#include "hash_tables.h"

/**
 * hash_table_get - Bir anahtara karsilik gelen degeri dondurur.
 * @ht: Bakilacak hash tablosu.
 * @key: Aranan anahtar.
 *
 * Return: Anahtarin degeri, anahtar bulunamazsa NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
