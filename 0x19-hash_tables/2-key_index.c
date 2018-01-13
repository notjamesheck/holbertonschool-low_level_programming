#include "hash_tables.h"
/**
* key_index - a function that gives you the index of a key
* @key: str to be converted to hash
* @size: size of array
* Return: index of key/value pair stored in hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int a, b;

	a = hash_djb2(key);
	b = a % size;
	return (b);
}
