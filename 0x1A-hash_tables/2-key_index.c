#include "hash_tables.h"
/**
 * key_index - return the index of a key
 * @key: th key
 * @size: size of the array
 * Return: index number
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
