#include <stdio.h>
#include <string.h>
#include "hash.h"

unsigned long get_index(char *key, int size);
{
	int hash_value;
	unsigned long index

	hash_value = djb2_hash(key);
	index = hash_value % size;
	return index;

}