#include "hash_tables.h"

/**
 * key_index - Bir anahtarin saklanacagi indeksi dondurur.
 * @key: Anahtar (string).
 * @size: Hash tablosunun dizi boyutu.
 *
 * Return: Anahtarin indeksi.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size == 0)
		return (0);
	hash = hash_djb2(key);
	return (hash % size);
}
