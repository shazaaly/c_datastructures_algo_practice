#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
void swapNodes(listint_t **head_ref, listint_t *node1, listint_t *node2)
{
	listint_t *tmp;

	/* no swap conditions*/
	if (!*head_ref || !node1 || !node2)
	{
		return;

	}
	/*check if node1 is not head*/

	if (node1->prev)
	{
		node1->prev->next = node2;
	}
	else
	{
		*head_ref = node2;

	}
    /*check if node2 is not tail*/

	if (node2->next)
	{
		node2->next->prev = node1;
	}
	/*swap prev & next pointers of node themselves*/
	tmp = node1->prev;
	node1->prev = node2->prev;
	node2->prev = tmp;

	tmp = node1->next;
    node1->next = node2->next;
    node2->next = tmp;

}

