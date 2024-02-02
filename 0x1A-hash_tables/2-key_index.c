#include "hash_tables.h"

/**
 * key_index - entrt point
 * @key: key
 * @size: size
 * Return: index of
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
