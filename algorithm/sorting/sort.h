#ifndef SORT_H
#define SORT_H
#include <stddef.h>  /*for size_t*/
#include <stdbool.h>  /*for bool*/


/**
* struct listint_s - Doubly linked list node
*
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
 const int n;
 struct listint_s *prev;
 struct listint_s *next;
} listint_t;


void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void swap(int *xp, int *yp);
void bubbleSort(int arr[], int n);
void bubble_sort(int *array, size_t size);



#endif