#include "sort.h"

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * 
 * 
 * 
 * 
 * 
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swapped;
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
