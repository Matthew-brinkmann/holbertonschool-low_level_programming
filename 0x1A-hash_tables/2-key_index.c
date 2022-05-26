#include "hash_tables.h"

/**
 * key_index - returns an index for a key
 * @key: the key
 * @size: the size of the hash table to create index for
 * Description: long description
 *
 * Return: hash number
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int retVal;

	retVal = (hash_djb2(key) % size);
	return (retVal);
}
