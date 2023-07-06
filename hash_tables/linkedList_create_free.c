
#include <stdio.h>
#include <string.h>
#include "hash.h"

LinkedList *allocateLL()
{
	LinkedList *list = (LinkedList*)malloc(sizeof(LinkedList));
	return (list);
}

void freeList(LinkedList *list)
{
	LinkedList *tmp = list;

	while (list)
	{
		tmp = list;
		free(list);
		free(tmp->item->key);
		free(tmp->item->value);
		free(tmp->item);
		free(tmp);


	}

}