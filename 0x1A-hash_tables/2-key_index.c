#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key,
			    unsigned long int size);

/**
 * key_index - function that gives index of a key
 * @key: is the key
 * @size: is te size of the array
 * Return: The index of the key
*/

unsigned long int key_index(const unsigned char *key,
			    unsigned long int size)
{
	return (hash_djb2(key) % size);
}