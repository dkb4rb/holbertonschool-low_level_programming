#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size);

/**
 * hash_table_create - Create new table of hashing
 * @size: thi is size of the array of hash
 * Return: new has table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_Table;
	unsigned long int l;

	new_Table = malloc(sizeof(hash_table_t));
	if (new_Table == NULL)
		return (NULL);

	new_Table->size = size;
	new_Table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_Table->array == NULL)
		return (NULL);
	while (l < size)
	{
		l++;
		new_Table->array[l] = NULL;
	}
	return (new_Table);
}
