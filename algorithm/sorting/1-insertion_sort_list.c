#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = *list;
	listint_t **head = list;
	listint_t *mover;

	while (ptr != NULL)
	{
		mover = ptr->next;
		while(ptr->prev != NULL && ptr->n < ptr->prev->n)
		{
			swapNodes(head, ptr, ptr->prev);
			ptr = ptr->prev;
			print_list(*head);  /*print after each swap*/

		}
		ptr = mover;
	}

}