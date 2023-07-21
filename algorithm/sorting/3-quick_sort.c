#include "sort.h"
#include <stdio.h>

int partition(int *array, size_t size, int low, int high)
{
    int *pivot = array + high;
    int i = low - 1;
    int j;

    for (j = low; j <= high - 1; j++) {
        if (array[j] < *pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    print_array(array, size);
    return i + 1;
}

void partition_sort(int *array, size_t size, int low, int high)
{
    int pivot_index;

    if (low < high) {
        pivot_index = partition(array, size, low, high);

        partition_sort(array, size, low, pivot_index - 1);
        partition_sort(array, size, pivot_index + 1, high);
    }
}

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	partition_sort(array, size, 0, size - 1);
}

