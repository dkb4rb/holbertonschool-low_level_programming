#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new;
    char *value_copy;
    unsigned long int index, i;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    for (i = index; ht->array[i]; i++)
    {
        if (strcmp(ht->array[i]->key, key) == 0)
        {
            free(ht->array[i]->value);
            ht->array[i]->value = value_copy;
            return (1);
        }
    }
    return 0;
}