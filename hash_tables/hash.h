#ifndef HASH_H
#define HASH_H

typedef struct Hash_item{
	char *str;
	char *value
} item;

#endif

typedef struct HashTable{
	// Contains an array of pointers to items.
	item **items;
	int size;
	int count;

} HashTable;