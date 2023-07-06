#include "hash.h"

LinkedList **create_buckets(LinkedList *table)
{
	int i;
	LinkedList **buckets = (LinkedList**) calloc(sizeof(LinkedList*) * table->size);

	for (i = 0; i < table->size; i++)
	{
		bucket[i] = NULL;

	}
	return (buckets);

}