#include "hash_tables.h"
/**
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;
	const unsigned char *u_key;

	if (ht == NULL || key == NULL)
		return (NULL);
	u_key = (const unsigned char *)key;
	index = key_index(u_key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);

}
