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
 * selection_sort - selection sorting function
 * @array: array to be sorted
 * @size: array size
 *
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, k;

	while (i + 1 < size)
	{
		k = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[k])
				k = j;
			j++;
		}
		if (k != i)
		{
			swap(&array[i], &array[k]);
			print_array(array, size);
		}
		i++;
	}
}
