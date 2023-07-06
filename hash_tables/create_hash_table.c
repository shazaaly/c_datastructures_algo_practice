#include <stdio.h>
#include <string.h>
#include "hash.h"
#define HASH_TABLE_CAPACITY 5000

/* allocate menory for item, item key, item value*/
H_item *create_new_item(char *key, char *value)
{
	/* create pointer to a new item*/
	item *item = (H_item*)malloc(sizeof(item));
	item->key *key = (char*)malloc(strlen(key) + 1);
	item->key *value = (char*)malloc(strlen(value) + 1);
	strcpy(table->key, key);
	strcpy(table->value, value);
	return (item);
}


HashTable *create_hash_table(int size)
{
	int i;
	/*create a new hash table*/
	HashTable *table = (HashTable*)malloc(sizeof(HashTable));
	table->size = size;
	table->count = 0;
	table->items = calloc(sizeof(H_item) * table->size);

	for (i = 0; i < table->size; i++)
	{
		/* sets all the items to NULL. */
		table->items[i] = NULL;
	}
	return (table)
}

/*============== free items and table============*/

void free_item(H_item *item)
{
	if (item)
	{
		free(item->key);
		free(item->value);
	}
	free(item);

}