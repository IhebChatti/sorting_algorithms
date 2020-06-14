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
 * bubble_sort - bubble sorting function
 * @array: array to be sorted
 * @size: array size
 *
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swapped;

	if (size <= 1)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j <  size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
