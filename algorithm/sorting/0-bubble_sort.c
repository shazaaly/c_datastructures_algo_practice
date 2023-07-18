#include "sort.h"
#include <stdio.h>

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int *ptr;
	bool swapped;

	ptr = array;

	for ( i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (*(ptr + j)  > *(ptr + j + 1))
			{
				swap((ptr + j), (ptr + j +1));
				print_array(array, size);
				swapped = true;
			}


		}
		if (swapped == false)
		{
			break;

		}
	}

}

