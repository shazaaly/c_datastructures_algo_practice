#include "hash.h"
/* add items to linked list at cetain given index*/

void avoid_collisions(HashTable *table, unsigned long index, H_item *item)
{
	LinkedList *head = table->overflow_buckets[index];
	if (head == NULL)
	{
		head = allocateLL();
		head->item = item;
		table->overflow_buckets[index] = head;
		return;

	}
	else
	{
		table->overflow_buckets[index] = head;
		return;
	}


}