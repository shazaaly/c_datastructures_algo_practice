
#include <stdio.h>
#include <string.h>
#include "hash.h"

int insert(HashTable *table, char *key, char *value)
{
	H_item *item;
	H_item *current;
	unsigned long index;
	int size = table->size;

	item = create_new_item(key, value);
	index =  get_index(key, size);

	current = table->items[index];
	if (current == NULL)
	{
		if (table->count == table->size)
		{
			printf("Table is full");
			free(item);  /*create create_new_item uses mallocs*/
			return;

		}

		table->items[index] = item; /*insert */
		table->count++;

	}




}