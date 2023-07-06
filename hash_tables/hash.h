#ifndef HASH_H
#define HASH_H

typedef struct Hash_item{
	char *key;
	char *value
} H_item;

typedef struct LinkedList
{
	H_item *item;
    struct LinkedList *next;
} LinkedList;

typedef struct HashTable{
	// Contains an array of pointers to items.
	item **items;
	LinkedList **overflow_buckets;
	int size;  /* no of slots in hash table*/
	int count; /* no of key-value pairs in hash table*/

} HashTable;


H_item *create_new_item(char *key, char *value);
HashTable *create_hash_table(int size, int count);
void free_item(H_item *item);
void free_table(HashTable **table);
void print_table(HashTable *table);
unsigned long djb2_hash(char *str);
unsigned long get_index(char *key, int size);
int insert(HashTable *table, char *key, char *value);
LinkedList *allocateLL();
void freeList(LinkedList *list);
LinkedList **create_buckets(LinkedList *table);
void avoid_collisions(HashTable *table, unsigned long index, H_item *item);



#endif
