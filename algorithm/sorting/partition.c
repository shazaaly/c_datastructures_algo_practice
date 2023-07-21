#include "sort.h"
int partition(int array[], int start, int end)
{
	int pivot = array[end];
	int i = start;
	int j;

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			swap(&array[i], &array[j]);
			i++;

		}

	}
	swap(&array[end], &array[i]);
	return i;

}