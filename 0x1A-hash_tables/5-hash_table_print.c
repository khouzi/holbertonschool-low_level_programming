#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: pointer to a hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int idx = 0;
	hash_node_t *node;
	char *comma = "";

    if (ht == NULL || !ht->array)
        return;
    putchar('{');
}