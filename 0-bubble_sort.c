#include "sort.h"

/**
 * bubble_sort - function to sort array in ascending order
 * @array: array to sort
 * @size: number of elements
 **/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag, temp, k;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				for (k = 0; k < size; k++)
				{
					printf("%d", array[k]);
					if (k < size - 1)
						printf(", ");
				}
				printf("\n");
			}
		}
		if (flag == 0)
			break;
	}
}

