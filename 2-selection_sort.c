#include "sort.h"

/**
 * selection_sort - sorting elements of an array using selection sort
 * @array: given array to sort
 * @size: number of elements in an array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, k;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			for (k = 0; k < size; k++)
			{
				printf("%d", array[k]);
					if (k < size - 1)
						printf(", ");
			}
			printf("\n");
		}
	}
}

