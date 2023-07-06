#include "hash.h"

LinkedList* linkedlist_insert(LinkedList* list, Ht_item* item)
{
    LinkedList* node = allocateLL();
    node->item = item;
    node->next = NULL;

    if (list == NULL)
    {
        return node;  // If the list is empty, the new node becomes the head
    }

    LinkedList* temp = list;
    while (temp->next != NULL)
    {
        temp = temp->next;  // Traverse the list to find the last node
    }

    temp->next = node;  // Append the new node to the end of the list
    return list;  // Return the original list
}
