#include "hash_tables.h"
/**
 * hash_table_set - add element to hash table
 * @ht: hash table to be added or updated
 * @key: is the key. Cannot be an empty string
 * @value: is the value associated with the key. Must be duplicated. Can be an empty string
 * Return: 1 is succed or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size = ht->size;
	unsigned long int index = key_index((const unsigned char *)key, size);

	hash_table_t *current_node = ht->array[index];
	hash_node_t *current_key = key;
	if (current_node == NULL || ht == NULL || strcmp(key, "") == 1)
		return (0);
	if (ht->size == index)
		return (0);
 

}