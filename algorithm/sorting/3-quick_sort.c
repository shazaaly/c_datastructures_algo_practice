#include "sort.h"

void quick_sort(int *array, size_t size)
{

	int start = 0;
	int end = size - 1;

	if (size <= 1)
	{
		return;
	}

	if (start < end)
	{
		int pivot = partition(array, start, end);
        quick_sort(array, (pivot - start));
        quick_sort(array, (size - pivot));
	}

}