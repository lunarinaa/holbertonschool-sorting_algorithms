#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition -  Lomuto partition for quicksort.
 * @array: array of integers.
 * @size: number of element
 * @left: start index
 * @right: end index
 * Return: final partition index.
 */
int partition(int *array, size_t size, int left, int right)
{
	int *pivot, a, b;

	pivot = array + right;
	for (a = b = left; b < right; b++)
	{
		if (array[b] < *pivot)
		{
			if (a < b)
			{
				swap(array + b, array + a);
				print_array(array, size);
			}
			a++;
		}
	}

	if (array[a] > *pivot)
	{
		swap(array + a, pivot);
		print_array(array, size);
	}

	return (a);
}

/**
 * sort - quicksort algorithm through recursion.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 * @left: Start index of the array partition to order.
 * @right: End index of the array partition to order.
 */
void sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = partition(array, size, left, right);
		sort(array, size, left, part - 1);
		sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - function to sort in ascending order using quicksort.
 * @array: array of integers.
 * @size: Size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	sort(array, size, 0, size - 1);
}

