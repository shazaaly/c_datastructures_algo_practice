#ifndef HASH_H
#define HASH_H

typedef struct Hash_item{
	char *key;
	char *value
} H_item;


typedef struct HashTable{
	// Contains an array of pointers to items.
	item **items;
	int size;
	int count;

} HashTable;


H_item *create_new_item(char *key, char *value);
HashTable *create_hash_table(int size, int count)


#endif
