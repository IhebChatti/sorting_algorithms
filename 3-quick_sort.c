#include "sort.h"

/**
 * swap - function to swap two ints
 * @a: first int
 * @b: second int
 *
 * Return: Void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - partition function
 * @array: array
 * @size: array size
 * @low: smaller int
 * @high: higher int
 *
 * Return: int
 */
int partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1), j;

	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
 * lomuto - lomuto quick sorting
 * @array: array to be sorted
 * @size: array size
 * @low: smallest int
 * @high: biggest int
 *
 * Return: Void
 */
void lomuto(int *array, size_t size, int low, int high)
{
	int index;

	if (low < high)
	{
		index = partition(array, size, low, high);
		lomuto(array, size, low, index - 1);
		lomuto(array, size, index + 1, high);
	}
}

/**
 * quick_sort - quicksorting function
 * @array: array to be sorted
 * @size: array size
 *
 * Return: Void
 */
void quick_sort(int *array, size_t size)
{
	if (array)
		lomuto(array, size, 0, size - 1);
}
